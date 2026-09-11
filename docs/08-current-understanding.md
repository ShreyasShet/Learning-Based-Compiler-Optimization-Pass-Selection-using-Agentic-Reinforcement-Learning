```markdown
# Current Understanding

## Current Pipeline Knowledge

The passes investigated so far are:

```text
mem2reg
   ↓
instcombine
   ↓
simplifycfg
   ↓
reassociate
   ↓
newgvn
   ↓
gvn-hoist