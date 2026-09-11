```markdown
# Pass Discovery

## Philosophy

Passes should be discovered from the IR rather than selected arbitrarily.

The process is:

```text
Observe IR
    ↓
Find remaining inefficiency
    ↓
Ask what capability is missing
    ↓
Find candidate pass
    ↓
Run it
    ↓
Inspect result
    ↓
Test ordering