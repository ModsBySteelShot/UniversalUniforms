#!/bin/bash
#
# Copyright (c) 2025 Džiugas Eiva GPL-3.0-only
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public Licence as published by
# the Free Software Foundation version 3 of the Licence.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public Licence for more details.
#
# You should have received a copy of the GNU General Public Licence
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
#

set -e

if [ "$1" = "check" ]; then
  echo "Checking .cpp file formatting..."
  find . -type f -name "*.cpp" -exec clang-format --dry-run --Werror {} +
  echo "All .cpp files are correctly formatted!"
else
  echo "Formatting all .cpp files with clang-format..."
  while IFS= read -r file; do
    clang-format -i "$file"
    awk '/^[[:space:]]*class / { if (prev && prev ~ /^[[:space:]]*};[[:space:]]*$/ && prev_prev !~ /^[[:space:]]*$/) print ""; } { print; prev_prev = prev; prev = $0; }' "$file" > temp && mv temp "$file"
  done < <(find . -name "*.cpp")
  echo "Formatting complete!"
fi
