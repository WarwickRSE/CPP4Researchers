# CPP4Researchers
Examples and problems for C++ for Researchers course

## This Repo
These are the code files and example sheets for Warwick RSEs "C++ for Researchers" one-day workshop.

The code from the slides is all in the SlidesAndMore directory. We suggest using these to recap syntax, and you might wish to borrow from them for the examples session.

The examples session is a chance to use the C++ we're teaching.
We provide a pdf of examples you can work through, from the first slides up to some classes
and templated code. The ModelSolutions directory of this repo contains AN implmentation
of each of these. These are not the ONLY implementation, and in some cases they are a bit
over-built, but they are designed to show real-world code using what we've discussed.
Reading, and understanding, code in a new language is a good way to get the hang of the harder parts!

## Building the Examples

Many of the features we use require C++11 support and some require C++14. Your
compiler may need you to specify this, and we recommend doing so if you get a warning
about needing some particular standard. Warnings like that distract from the real
ones and encourage you to ignore what the compiler is saying.

We recommend always testing new code for standards compliance by turning on all compiler
warnings and errors. For GCC this is -Wall -Wextra for a lot, and you can also
enable some more things explicitly. Code that gives warnings should be a red-flag: it will
compile and may work, but often is a sign that something is "off". Occasionally the compiler
is over zealous though, and expecially when developing you may wish to turn off SOME flags, such as
unused variables.


