# Learning-Based Compiler Optimization Pass Selection using Agentic Systems

## Overview

This project investigates whether a learning-based system can intelligently select and order compiler optimization passes instead of relying only on a fixed optimization pipeline.

The eventual goal is to build an agent that observes the current program representation, selects an optimization pass, applies that pass through LLVM, evaluates the resulting program state, and continues selecting passes based on the newly exposed optimization opportunities.

The project is being developed incrementally.

Rather than immediately applying machine learning or reinforcement learning, the first stage focuses on understanding compiler optimization from first principles:

1. Observe an LLVM IR program.
2. Identify an optimization opportunity manually.
3. Determine what transformation is required.
4. Identify the LLVM pass capable of performing that transformation.
5. Test the pass.
6. Test different pass orderings.
7. Record how earlier passes expose opportunities for later passes.
8. Gradually build the knowledge required for a learning-based pass selector.

---

## Research Question

The long-term research question is:

> Can a learning-based agent discover useful compiler pass sequences for individual programs and eventually produce better optimization results than fixed pipelines such as LLVM `-O2` and `-O3`?

The current stage is focused on a more fundamental question:

> How do LLVM optimization passes interact, and how does the ordering of those passes affect the optimization opportunities visible to later passes?

---

## Current Experimental Pipeline

The passes discovered so far are:

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