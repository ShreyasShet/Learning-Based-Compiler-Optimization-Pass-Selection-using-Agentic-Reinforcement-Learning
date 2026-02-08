# Learning-Based-Compiler-Optimization-Pass-Selection-using-Agentic-Reinforcement-Learning

This project explores learning optimal sequences of LLVM optimization passes using an agentic reinforcement learning approach.

## Approach
- Extract program-level features from LLVM IR
- Model pass selection as a reinforcement learning problem
- Reward based on IR instruction count reduction
- Compare learned policies against standard -O2 optimization

## Results
The learned agent reduces IR instruction count across multiple C benchmarks and demonstrates competitive performance with fixed optimization levels.
