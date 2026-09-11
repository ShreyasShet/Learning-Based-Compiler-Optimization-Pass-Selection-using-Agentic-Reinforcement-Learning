```markdown
# Compiler Optimization Basics

## LLVM IR as the Observation Point

The project uses LLVM IR as the main representation for understanding optimization.

The basic experiment is:

```text
C/C++ source
     ↓
LLVM IR
     ↓
optimization pass
     ↓
new LLVM IR