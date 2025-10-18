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

echo "Linting config syntax..."

# 1. Ensure every closing brace is immediately followed by a semicolon
fail=0
while IFS= read -r file; do
  if grep -En '^[[:space:]]*\}[[:space:]]*$$' "$file" >/dev/null; then
    echo "ERROR: Missing semicolon after closing brace in $file:";
    grep -En '^[[:space:]]*\}[[:space:]]*$$' "$file";
    fail=1;
  fi;
done < <(find . -name "*.cpp")
if [ $fail -eq 1 ]; then exit 1; fi

echo "Linting passed!"
