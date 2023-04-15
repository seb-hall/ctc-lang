# ce & cbc spec
specificaton of ctc executables and ctc bytecode

## ctc architecture notes

ctc objects are stored by location, containing class members (fixed size)
ctc functions are treated as objects, with their own variables and location

ctc locations are defined as locations within an array of constant size

ctc types:

bool    1 0
char    8 1

int     32 2
int_64  64 3

uint    32 4
uint_64 64 5

float   32 6
double  64 7



## ctc executable anatomy

```
global variables and functions declaration


```

## ctc bytecode

### flow operations

0 MOVE loc - set target address
2 RUNF loc - run function at address
3 EXTF loc - call external function specified by address

  JUMP loc - jump by constant
  JIFT loc - jump by constant if current value is true

### logic operations
  ANDD loc - set target to boolean AND with address
  ORRR loc - ** OR **
  NAND loc - ** NAND **
  NORR loc - ** NOR **
  NOTT loc - ** NOT of address
  
  ### conversion operations - maybe all of them actually
  CT23 loc - convert location from type 2 to 3
  CT24 loc
  CT25 loc
  CT26 loc
  CT27 loc
  CT32 loc
  CT34 loc ....

  ### arithmetic operations

  SI32 loc - set target to new value, both int 32
  
  SI64 loc - set target to new value, both int 64
  
  SU32 loc - set target to new value, both uint 32
  
  SU64 loc - set target to new value, both uint 64
  
  SF32 loc - set target to new value, both float
  
  SF64 loc - set target to new value, both double


  A*** loc - increase target by, i.e +=
  
  S*** loc - decrease target by, i.e -=
  
  M*** loc - multiply target by, i.e *=
  
  D*** loc - divide target by, i.e /=
  

