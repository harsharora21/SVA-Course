# SVA-Course
This is a repo for Software Verification Course. 

## Square Count
This problem is from CodeForces (link: https://codeforces.com/contest/1646/problem/A)

### squareCountProof.c
squareCountProof.c contains the proof of the solution. This is to be run using cbmc.
Running this with maxlen=16 works.

    maxlen=16
    cbmc -D N=$maxlen --unwind $(($maxlen + 2)) squareCountProof.c
However maxlen=32 does not terminate in a reasonable time.

    maxlen=32
    cbmc -D N=$maxlen --unwind $(($maxlen + 2)) squareCountProof.c

### squareCountSol.c
squareCountSol.c contains the solution to the problem.
