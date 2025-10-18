.PHONY: format
format:
	@bash .github/scripts/format.sh

.PHONY: format-check
format-check:
	@bash .github/scripts/format.sh check

.PHONY: lint
lint: format-check
	@bash .github/scripts/lint.sh
