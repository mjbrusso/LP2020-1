      DATA DIVISION.
      WORKING STORAGE SECTION.

         01 Student.
            02 Name.
               03 First-Name  PIC A(20).
               03 Last-Name   PIC A(20).
            02 Home-Address.
               03 Street-Addr  PIC X(25).
               03 City         PIC X(18).
               03 Zip-Code.
                  04 Zip-Regular    PIC 9(5).
                  04 Zip-Extension  PIC 9(3).
            02 Date-of-Birth.
               03 Month  PIC 99.             
               03 Day    PIC 99.             
               03 Year   PIC 9999.
  

            
