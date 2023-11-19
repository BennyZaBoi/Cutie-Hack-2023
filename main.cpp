#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

void welcomeScreenDisplay() {
    cout << "----------------------------------------------------" << endl;
    cout << " Welcome to UCR Currency Exchange from USD To Any! " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    cout << "Only use currency codes please Examples: (USD, EUR)" << endl;
    cout << "It can take in lowercase also!" << endl;
    cout << "1. Convert from USD to another? " << endl;
    cout << "2. Exit The Program!" << endl << endl;
}

int getValidChoice() {
    int choice;
    string input;
    
    while (true) {
        cout << "Enter your Choice! (1 or 2): ";
        cin >> input;

        if (input.length() == 1 && isdigit(input[0])) {
            choice = input[0] - '0'; 
            if (choice == 1 || choice == 2) {
                break;
            }
        }

        cout << "Invalid Input! Only 1 or 2, please!" << endl;
    }

    return choice;
}

int main() {
    int choice;

    do {
        string ISOinput;
        long double inputUSD = 0;

        welcomeScreenDisplay();

        choice = getValidChoice();

        if (choice == 1) {
            cout << "Enter the target currency: ";
            cin >> ISOinput;

            cout << "Enter the amount: ";
            while (!(cin >> inputUSD)) {
                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                string invalidInput;
                getline(cin, invalidInput);
                cout << "Enter the amount: ";
            }
    
 for (size_t i = 0; i < ISOinput.length(); ++i) {
    ISOinput[i] = toupper(ISOinput[i]);
}
    
    long double Exchange;

    if (ISOinput == "EUR") {
    Exchange=  inputUSD * 0.92;
  }
    else if ( ISOinput =="FJD") {
    Exchange = inputUSD * 2.29;
  }
    else if ( ISOinput =="FKP" ){
    Exchange = inputUSD * 0.80;
  }
    else if ( ISOinput =="DDK") {
    Exchange = inputUSD * 6.83;    
  }
    else if ( ISOinput =="GBP") {
    Exchange = inputUSD * 0.80;
  }
    else if ( ISOinput =="GEL") {
    Exchange = inputUSD * 2.70;
  }
    else if ( ISOinput =="GGP") {
    Exchange = inputUSD * 0.80;  
  }
    else if ( ISOinput == "GHS"){
    Exchange= inputUSD * 11.90;

  }
    else if ( ISOinput == "GIP"){
    Exchange = inputUSD * 0.806;
  }
    else if (ISOinput == "GMD"){
    Exchange = inputUSD * 67.25;
  }
    else if ( ISOinput == "GNF"){
    Exchange = inputUSD * 8550.76;  
  }
    else if ( ISOinput == "GTQ"){
    Exchange = inputUSD * 7.79;
  }
    else if (ISOinput == "GYD"){
    Exchange = inputUSD * 208.20;
  }
    else if ( ISOinput == "HKD"){
    Exchange = inputUSD * 7.80;
  }
    else if ( ISOinput == "HNL"){
    Exchange = inputUSD * 24.58;
  }
    else if (ISOinput == "HRK"){
    Exchange = inputUSD * 7.04;
  }
    else if (ISOinput == "HTG"){
    Exchange = inputUSD * 132.05;
  }
    else if (ISOinput == "HUF"){
    Exchange = inputUSD * 347.38;
  }
    else if (ISOinput == "IDR"){
    Exchange = inputUSD * 15,424.30;  
  }
    else if (ISOinput == "ILS"){
    Exchange = inputUSD * 3.72;
  }
    else if (ISOinput == "IMP"){
    Exchange = inputUSD * 0.806;
  }
    else if (ISOinput == "INR"){
    Exchange = inputUSD * 83.29;
  }
    else if (ISOinput == "IQD"){
    Exchange = inputUSD * 1303.63;
  }
    else if (ISOinput == "IRR"){
    Exchange = inputUSD * 42,262.50;
  }
    else if (ISOinput == "ISK"){
    Exchange = inputUSD * 140.06;
  }
    else if (ISOinput == "JEP"){
    Exchange = inputUSD * 0.84; 
  }
    else if (ISOinput == "JMD"){
    Exchange = inputUSD * 155.07;
  }
    else if (ISOinput == "JOD"){
    Exchange = inputUSD * 0.71;
  }
    else if (ISOinput == "JPY"){
    Exchange = inputUSD * 149.54;
  }
    else if (ISOinput == "KES"){
    Exchange = inputUSD * 151.55;
  }
    else if (ISOinput == "KGS"){
    Exchange = inputUSD * 89.13;
  }
    else if (ISOinput == "KHR"){
    Exchange = inputUSD * 4100;
  }
    else if (ISOinput == "KID"){
    Exchange = inputUSD * 0.92;
  }
    else if (ISOinput == "KMF"){
    Exchange = inputUSD * 453.62;
  }
    else if (ISOinput == "KRW"){
    Exchange = inputUSD * 1296.38;
  }
    else if (ISOinput == "KWD"){
    Exchange = inputUSD * 0.31;
  }
    else if (ISOinput == "KYD"){
    Exchange = inputUSD * 0.83;
  }
    else if (ISOinput == "KZT"){
    Exchange = inputUSD * 461.73;
  }
    else if (ISOinput == "LAK"){
    Exchange = inputUSD * 20635.56; 
  }
    else if (ISOinput == "LBP"){
    Exchange = inputUSD * 14966.73;  
  }
    else if (ISOinput == "LKR"){
    Exchange = inputUSD * 326.43;
  }
    else if (ISOinput == "LRD"){
    Exchange = inputUSD * 187.85;
  }
    else if (ISOinput == "LSL"){
    Exchange = inputUSD * 18.37;
  }
    else if (ISOinput == "LYD"){
    Exchange = inputUSD * 4.82;
  }
    else if (ISOinput == "MAD"){
    Exchange = inputUSD * 10.09;
  }
    else if (ISOinput == "MDL"){
    Exchange = inputUSD * 17.75;
  }
    else if (ISOinput == "MGA"){
    Exchange = inputUSD * 4507.53;
  }
    else if (ISOinput == "MKD"){
    Exchange = inputUSD * 56.43;
  }
   else if (ISOinput=="BRL") {
    Exchange = inputUSD *4.91 ;
    }
    else if (ISOinput=="BSD"){
        Exchange= inputUSD * 1.00;
    }
    else if (ISOinput=="BTN"){
        Exchange= inputUSD * 82.85;
    }
     else if (ISOinput=="BWP"){
        Exchange= inputUSD * 13.35;
     }
      else if (ISOinput=="BYN"){
        Exchange= inputUSD * 3.28;
     }
     else if (ISOinput=="BZD"){
        Exchange= inputUSD * 2.01;
     }
      else if (ISOinput=="CAD"){
        Exchange= inputUSD * 1.37 ;
     }
        else if (ISOinput=="CDF"){
        Exchange= inputUSD * 2,626.00 ;
     }
        else if (ISOinput=="CHF") {
            Exchange = inputUSD * 0.89;
        }
        else if (ISOinput=="CLP") {
            Exchange = inputUSD * 872.92 ;
        }
          else if (ISOinput=="CNY") {
            Exchange = inputUSD * 7.21 ;
        }
          else if (ISOinput=="COP") {
            Exchange = inputUSD * 4,066.94 ;
        }
         else if (ISOinput=="CRC") {
            Exchange = inputUSD * 528.87 ;
        }
        else if (ISOinput=="CUP") {
            Exchange = inputUSD * 23.88 ;
        }
         else if (ISOinput=="CVE") {
            Exchange = inputUSD * 100.98  ;
        }
         else if (ISOinput=="CZK") {
            Exchange = inputUSD * 22.43  ;
        }
         else if (ISOinput=="DJF") {
            Exchange = inputUSD * 177.18  ;
        }
         else if (ISOinput=="DKK" || ISOinput == "FOK") {
            Exchange = inputUSD * 6.83  ;
        }
          else if (ISOinput=="DOP") {
            Exchange = inputUSD * 56.51 ;
        }
        else if (ISOinput=="DZD") {
            Exchange = inputUSD * 134.35 ;
        }
        else if (ISOinput=="EGP") {
            Exchange =inputUSD * 30.77;
        }
          else if (ISOinput=="ERN") {
            Exchange =inputUSD * 15.00;
        }
          else if (ISOinput=="ETB") {
            Exchange =inputUSD * 55.66;
        }
        
         else if (ISOinput=="SVC ") {
            Exchange =inputUSD * 8.716;
        }
         else if (ISOinput=="SYP ") {
            Exchange =inputUSD * 13001.80000;
        }
      else if (ISOinput=="SZL") {
            Exchange =inputUSD * 18.22;
        }
           else if (ISOinput=="THB") {
            Exchange =inputUSD * 35.40 ;
        }
          else if (ISOinput=="TJS") {
            Exchange =inputUSD * 10.89  ;
        }
           else if (ISOinput=="TMT") {
            Exchange =inputUSD * 3.50  ;
        }
         else if (ISOinput=="TND") {
            Exchange =inputUSD * 3.11  ;
        }
           else if (ISOinput=="TOP") {
            Exchange =inputUSD * 2.38  ;
        }
        else if (ISOinput=="TRY") {
            Exchange = inputUSD * 28.70; 
        }
        else if (ISOinput=="TTD") {
            Exchange = inputUSD * 6.76 ;
        }
         else if (ISOinput=="TVD") {
            Exchange = inputUSD * 1.53557 ;
        }
        else if (ISOinput=="TWD") {
            Exchange = inputUSD * 31.75 ;
        }
        
         else if (ISOinput=="TZS") {
            Exchange = inputUSD * 2,485.83 ;
        }
        else if (ISOinput=="UAH") {
            Exchange = inputUSD * 35.94 ;
        }
         else if (ISOinput=="UGX") {
            Exchange = inputUSD * 3,761.16 ;
        }
         else if (ISOinput=="USD") {
            Exchange = inputUSD * 1.00 ;
        }
        else if (ISOinput=="UYU") {
           Exchange = inputUSD * 39.53;

         }
          else if (ISOinput=="UZS") {
           Exchange = inputUSD * 12,220.34;

         }
         else if (ISOinput=="VES") {
           Exchange = inputUSD * 35.3964;


         }
         else if (ISOinput=="VND") {
           Exchange = inputUSD * 24,265.00;


         }
          else if (ISOinput=="VUV") {
           Exchange = inputUSD * 118.722;


         }
           else if (ISOinput=="WST") {
           Exchange = inputUSD * 2.8;


         }
         else if (ISOinput=="XAF") {
            Exchange = inputUSD * 600.72 ;
         }
          else if (ISOinput=="XCD") {
            Exchange = inputUSD * 2.70;
         }
          else if (ISOinput=="XDR") {
            Exchange = inputUSD *  0.755245;
          }
            else if (ISOinput=="XOF") {
            Exchange = inputUSD *  600.72;
          }
          else if (ISOinput== "XPF" ) {
            Exchange = inputUSD * 110.45;
          }
          else if (ISOinput == "YER") {
            Exchange =inputUSD* 250.40;
          }
          else if (ISOinput == "ZAR") {
            Exchange =inputUSD* 18.34;
          }
           else if (ISOinput == "ZMW") {
            Exchange =inputUSD* 23.11;
          }
           else if (ISOinput == "ZWL") {
            Exchange =inputUSD* 322;
          } else if(ISOinput == "AED"){ 
    Exchange = inputUSD * 3.67; 
 }
 else if(ISOinput == "AFN"){
    Exchange = inputUSD * 68.72;
} 
else if(ISOinput == "ALL"){
    Exchange = inputUSD * 94.20;
} 
else if(ISOinput == "AMD"){
    Exchange = inputUSD * 400.75;
} 
else if(ISOinput == "ANG"){
    Exchange = inputUSD * 1.79;
} 
else if(ISOinput == "AOA"){
    Exchange = inputUSD * 827.72;
} 
else if(ISOinput == "ARS"){
    Exchange = inputUSD * 351.77;
} 
else if(ISOinput == "AUD"){
    Exchange = inputUSD * 1.54;
} 
else if(ISOinput == "AWG"){
    Exchange = inputUSD * 1.80;
} 
else if(ISOinput == "AZN"){
    Exchange = inputUSD * 1.70;
} 
else if(ISOinput == "BAM"){
    Exchange = inputUSD * 1.79;
} 
else if(ISOinput == "BBD"){
    Exchange = inputUSD * 2.01;
} 
else if(ISOinput == "BDT"){
    Exchange = inputUSD * 110.21;
} 
else if(ISOinput == "BGN"){
    Exchange = inputUSD * 1.80;
} 
else if(ISOinput == "BHD"){
    Exchange = inputUSD * 0.38;
} 
else if(ISOinput == "BIF"){
    Exchange = inputUSD * 2828.34;
} 
else if(ISOinput == "BMD"){
    Exchange = inputUSD * 1.00;
} 
else if(ISOinput == "BND"){
    Exchange = inputUSD * 1.34;
} 
else if(ISOinput == "BOB"){
    Exchange = inputUSD * 6.88;
} 
// end Jack part A
else if(ISOinput == "HRK"){
    Exchange = inputUSD * 7.04215;
} 
else if(ISOinput == "HNL"){
    Exchange = inputUSD * 24.58;
} 
else if(ISOinput == "HTG"){
    Exchange = inputUSD * 132.05;
} 
else if(ISOinput == "HUF"){
    Exchange = inputUSD * 347.38;
} 
else if(ISOinput == "IDR"){
    Exchange = inputUSD * 15424.30;
} 
else if(ISOinput == "ILS"){
    Exchange = inputUSD * 3.72;
} 
else if(ISOinput == "IMP"){
    Exchange = inputUSD * 0.085642;
}
else if(ISOinput == "INR"){
    Exchange = inputUSD * 83.29;
}
else if(ISOinput == "IQD"){
    Exchange = inputUSD * 1303.63;
}
else if(ISOinput == "IRR"){
    Exchange = inputUSD * 42262.50;
}
else if(ISOinput == "ISK"){
    Exchange = inputUSD * 140.06;
}
else if(ISOinput == "JEP"){
    Exchange = inputUSD * 0.841;
}
else if(ISOinput == "JMD"){
    Exchange = inputUSD * 155.07;
}
else if(ISOinput == "JOD"){
    Exchange = inputUSD * 0.71;
}
else if(ISOinput == "JPY"){
    Exchange = inputUSD * 149.54;
}
else if(ISOinput == "KES"){
    Exchange = inputUSD * 151.55;
}
else if(ISOinput == "KGS"){
    Exchange = inputUSD * 89.13;
}
else if(ISOinput == "KHR"){
    Exchange = inputUSD * 4100.00;
}
else if(ISOinput == "KID"){
    Exchange = inputUSD * 1.54;
}
else if(ISOinput == "KMF"){
    Exchange = inputUSD * 453.62;
}
else if(ISOinput == "KRW"){
    Exchange = inputUSD * 1296.38;
}
else if(ISOinput == "KWD"){
    Exchange = inputUSD * 0.31;
}
else if(ISOinput == "KYD"){
    Exchange = inputUSD * 0.83;
}
else if(ISOinput == "KZT"){
    Exchange = inputUSD * 461.73;
}
else if(ISOinput == "LAK"){
    Exchange = inputUSD * 20635.56;
}
else if(ISOinput == "LBP"){
    Exchange = inputUSD * 14956.73;
}
else if(ISOinput == "LKR"){
    Exchange = inputUSD * 326.43;
}
else if(ISOinput == "LRD"){
    Exchange = inputUSD * 187.85;
}
else if(ISOinput == "LSL"){
    Exchange = inputUSD * 18.37;
}
else if(ISOinput == "LYD"){
    Exchange = inputUSD * 4.82;
}
else if(ISOinput == "MAD"){
    Exchange = inputUSD * 10.09;
}
else if(ISOinput == "MDL"){
    Exchange = inputUSD * 17.75;
}
else if(ISOinput == "MGA"){
    Exchange = inputUSD * 4507.53;
}
else if(ISOinput == "MKD"){
    Exchange = inputUSD * 56.43;
}
else if(ISOinput == "MMK"){
    Exchange = inputUSD * 2089.75;
}
else if(ISOinput == "MNT"){
    Exchange = inputUSD * 3450.0;
}
else if(ISOinput == "MOP"){
    Exchange = inputUSD * 7.99;
}
else if(ISOinput == "MRU"){
    Exchange = inputUSD * 39.75;
}
else if(ISOinput == "MUR"){
    Exchange = inputUSD * 44.16 ;
}
else if(ISOinput == "MVR"){
    Exchange = inputUSD * 15.45 ;
}
else if(ISOinput == "MWK"){
    Exchange = inputUSD * 1675.17;
}
else if(ISOinput == "MXN"){
    Exchange = inputUSD * 17.23;
}
else if(ISOinput == "MYR"){
    Exchange = inputUSD * 4.67 ;
}
else if(ISOinput == "MZN"){
    Exchange = inputUSD * 63.25;
}
else if(ISOinput == "NAD"){
    Exchange = inputUSD * 18.37;
}
else if(ISOinput == "NGN"){
    Exchange = inputUSD * 840.04 ;
}
else if(ISOinput == "NIO"){
    Exchange = inputUSD * 36.42 ;
}
else if(ISOinput == "NOK"){
    Exchange = inputUSD * 10.79;
}
else if(ISOinput == "NPR"){
    Exchange = inputUSD * 132.57;
}
else if(ISOinput == "NZD"){
    Exchange = inputUSD * 1.67;
}
else if(ISOinput == "OMR"){
    Exchange = inputUSD * 0.38;
}
else if(ISOinput == "PAB"){
    Exchange = inputUSD * 1.00;
}
else if(ISOinput == "PEN"){
    Exchange = inputUSD * 3.85;
}
else if(ISOinput == "PGK"){
    Exchange = inputUSD * 3.76;
}
else if(ISOinput == "PHP"){
    Exchange = inputUSD * 55.40;
}
else if(ISOinput == "PLN"){
    Exchange = inputUSD * 4.02;
}
else if(ISOinput == "PYG"){
    Exchange = inputUSD * 7395.03;
}
else if(ISOinput == "QAR"){
    Exchange = inputUSD *  3.64;
}
else if(ISOinput == "RON"){
    Exchange = inputUSD * 4.57;
}
else if(ISOinput == "RSD"){
    Exchange = inputUSD * 107.37;
}
else if(ISOinput == "RUB"){
    Exchange = inputUSD * 89.35;
}
else if(ISOinput == "RWF"){
    Exchange = inputUSD * 1227.35;
}
else if(ISOinput == "SAR"){
    Exchange = inputUSD * 3.75;
}
else if(ISOinput == "SBD"){
    Exchange = inputUSD * 8.42;
}
else if(ISOinput == "SCR"){
    Exchange = inputUSD * 13.12 ;
}
else if(ISOinput == "SDG"){
    Exchange = inputUSD * 601.00;
}
else if(ISOinput == "SEK"){
    Exchange = inputUSD * 10.59;
}
else if(ISOinput == "SGD"){
    Exchange = inputUSD * 1.34 ;
}
else if(ISOinput == "SHP"){
    Exchange = inputUSD * 0.802762;
}
else if(ISOinput == "SLL"){
    Exchange = inputUSD * 19750.00;
}
else if(ISOinput == "SOS"){
    Exchange = inputUSD * 571.00;
}
else if(ISOinput == "SRD"){
    Exchange = inputUSD * 38.14;
}
else if(ISOinput == "SSP"){
    Exchange = inputUSD * 130.26;
}
else if(ISOinput == "STN"){
    Exchange = inputUSD * 22281.80 ;
}
            
          else if (ISOinput == "UCR") {
            Exchange = inputUSD * 69;
            cout << "Your student loans is this amount: " << Exchange << "$" << endl;
          }
        
        else {
                cout << "Invalid Target currency. Conversion not supported." << endl;
                continue;  
            }

            cout << inputUSD << " " << "USD" << " is equivalent to ";
            cout << " " << Exchange << " " << ISOinput << endl;
        }   else if (choice == 2) {
            cout << "Exiting the Currency Exchange App. Goodbye!" << endl;
        }

    } while (choice != 2);

    return 0;

}
