puts RubyVM::InstructionSequence.compile('puts (1+2).gcd(2)').disasm
