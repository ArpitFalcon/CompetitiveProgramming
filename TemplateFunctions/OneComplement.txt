/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/


unsigned int getOnesComplement(unsigned int number) {
  unsigned onesComplement = 1;
  if (number < 1)
    return onesComplement;
  size_t size = (sizeof(unsigned int) * 8 - 1);
  unsigned int oneShiftedToMSB = 1 << size;
  unsigned int shiftedNumber = number;
  for (size_t bitsToBeShifted = 0; bitsToBeShifted < size; bitsToBeShifted++) {
    shiftedNumber = number << bitsToBeShifted;
    if (shiftedNumber & oneShiftedToMSB) {
      onesComplement = ~shiftedNumber;
      onesComplement = onesComplement >> bitsToBeShifted;
      break;
    }
  }
  return onesComplement;
}
