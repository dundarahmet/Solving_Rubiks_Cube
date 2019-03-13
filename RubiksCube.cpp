//
//  RubiksCube.cpp
//  Solution Of Rubik's Cube
//
//  Created by AHMET DÜNDAR on 24.02.2019.
//  Copyright © 2019 AHMET DÜNDAR. All rights reserved.
//

#include "RubiksCube.hpp"

//-----------------------------------------------------------------------------------------
void rubiksCube:: setUpperSide( array < array < char , columns > , rows > &upperSidePtr ) {
    holderUpperSide = upperSidePtr ;
}
void rubiksCube:: setLowerSide( array < array < char , columns > , rows > &lowerSidePtr ) {
    holderLowerSide = lowerSidePtr ;
}
void rubiksCube:: setRightSide( array < array < char , columns > , rows > &rightSidePtr ) {
    holderRightSide = rightSidePtr ;
}
void rubiksCube:: setFrontSide( array < array < char , columns > , rows > &frontSidePtr ) {
    holderFrontSide = frontSidePtr ;
}
void rubiksCube:: setLeftSide( array < array < char , columns > , rows > &leftSidePtr ) {
    holderLeftSide = leftSidePtr ;
}
void rubiksCube:: setBackSide( array < array < char , columns > , rows > &backSidePtr ) {
    holderBackSide = backSidePtr ;
}

array < array < char , columns > , rows > rubiksCube:: getFrontSide ( void ) {
    return holderFrontSide ;
}
array < array < char , columns > , rows > rubiksCube:: getBackSide ( void ) {
    return holderBackSide ;
}
array < array < char , columns > , rows > rubiksCube:: getUpperSide ( void ) {
    return holderUpperSide ;
}
array < array < char , columns > , rows > rubiksCube:: getLowerSide ( void ) {
    return holderLowerSide ;
}
array < array < char , columns > , rows > rubiksCube:: getRightSide ( void ) {
    return holderRightSide ;
}
array < array < char , columns > , rows > rubiksCube:: getLeftSide ( void ) {
    return holderLeftSide ;
}
//-----------------------------------------------------------------------------------------


void rubiksCube:: systemPause( void ) const {
    cout << "Press enter to continue..." ;
    cin.get() ;
}

void rubiksCube:: initializationTheCubeOfSide ( void ) {
    
    int counter = 0 ;
    bool replace = false ;
    
    do {
        array < array < char , columns > , rows > holder = { } ;
        if ( counter == 0 ) {
            cout << "For upper Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            upperSide = holder ;
        }
        else if ( counter == 1 ) {
            cout << "For lower Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            lowerSide = holder ;
        }
        else if ( counter == 2 ) {
            cout << "For right Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            rightSide = holder ;
        }
        else if ( counter == 3 ) {
            cout << "For front Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            frontSide = holder ;
        }
        else if ( counter == 4 ) {
            cout << "For left Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            leftSide = holder ;
        }
        else if ( counter == 5 ) {
            cout << "For back Side " << endl ;
            for ( int column = 0 ; column < columns ; column++ ) {
                cout << "colour for column " << column + 1 << ": " << endl ;
                for ( int row = 0 ; row < rows ; row++ ) {
                    bool condition = 0 ;
                    do {
                        
                        cout << "colour for row " << row + 1 << ": " ;
                        cin >> holder[row][column] ;
                        
                        switch (holder[row][column]) {
                            case 'w':
                            case 'W':
                                condition = 1 ;
                                break;
                            case 'r':
                            case 'R':
                                condition = 1 ;
                                break ;
                            case 'g':
                            case 'G':
                                condition = 1 ;
                                break;
                            case 'y':
                            case 'Y':
                                condition = 1 ;
                                break ;
                            case 'o':
                            case 'O':
                                condition = 1 ;
                                break;
                            case 'b':
                            case 'B':
                                condition = 1 ;
                                break ;
                                
                            default:
                                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value. Reenter the value" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl ;
                                break;
                        }
                    } while ( condition == 0 ) ;
                }
            }
            backSide = holder ;
        }
        else if ( counter >= 5 ) {
            replace = checkTheRubiksCube() ;
            
            if ( replace == true ) {
                cout << "The values are true" << endl ;
                holderUpperSide = upperSide ;
                holderLowerSide = lowerSide ;
                holderRightSide = rightSide ;
                holderFrontSide = frontSide ;
                holderLeftSide = leftSide ;
                holderBackSide = backSide ;
                break ;
            }
            else if ( replace == false ) {
                cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << "Wrong value" << endl << "Reenter the cube of color" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!" << endl ;
                displayRubiksCube() ;
                counter = -1 ;
            }
        }
        if ( counter <= 6 ) {
            counter++ ;
            holder = { } ;
        }
    } while ( true ) ;
}


bool rubiksCube:: checkTheRubiksCube( void ) {
    
    int blue = 0 ;
    int yellow = 0 ;
    int orange = 0 ;
    int green = 0 ;
    int white = 0 ;
    int red = 0 ;
    int counter = 0 ;
    
    while ( true ) {
        
        array < array < char, columns >, rows > holderMatrix = { } ;
        
        if ( counter == 0 ) {
            holderMatrix = upperSide ;
        }
        else if ( counter == 1 ) {
            holderMatrix = lowerSide ;
        }
        else if ( counter == 2 ) {
            holderMatrix = rightSide ;
        }
        else if ( counter == 3 ) {
            holderMatrix = leftSide ;
        }
        else if ( counter == 4 ) {
            holderMatrix = frontSide ;
        }
        else if ( counter == 5 ) {
            holderMatrix = backSide ;
        }
        else if ( counter > 5 ){
            break ;
        }
        
        for ( int column = 0 ; column < columns ; column++ ) {
            for ( int row = 0 ; row < rows ; row++ ) {
                switch (holderMatrix[row][column]) {
                    case 'w':
                    case 'W':
                        white++ ;
                        break;
                    case 'r':
                    case 'R':
                        red++ ;
                        break ;
                    case 'g':
                    case 'G':
                        green++ ;
                        break;
                    case 'y':
                    case 'Y':
                        yellow++ ;
                        break ;
                    case 'o':
                    case 'O':
                        orange++ ;
                        break;
                    case 'b':
                    case 'B':
                        blue++ ;
                        break ;
                        
                    default:
                        break;
                }
            }
        }
        
        holderMatrix = { } ;
        counter++ ;
    }
    cout << endl << "blue: " << blue << endl << "yellow: " << yellow << endl << "orange: " << orange << endl << "green: " << green << endl << "white: " << white << endl << "red: " << red << endl ;
    if ( blue == 9 && yellow == 9 && orange == 9 && green == 9 && white == 9 && red == 9 ) {
        
        return true ;
    }
    else {
        return false ;
    }
}

void rubiksCube:: displayRubiksCube( void ) {
    
    
    int counter = 0 ;
    
    while ( true ) {
        array < array < char, columns >, rows > holderMatrix = { } ;
        
        if ( counter == 0 ) {
            holderMatrix = holderUpperSide ;
            cout << "UpperSide" << endl ;
        }
        else if ( counter == 1 ) {
            holderMatrix = holderLowerSide ;
            cout << "LowerSide" << endl ;
        }
        else if ( counter == 2 ) {
            cout << "RightSide" << endl ;
            holderMatrix = holderRightSide ;
        }
        else if ( counter == 3 ) {
            cout << "LeftSide" << endl ;
            holderMatrix = holderLeftSide ;
        }
        else if ( counter == 4 ) {
            cout << "FrontSide" << endl ;
            holderMatrix = holderFrontSide ;
        }
        else if ( counter == 5 ) {
            cout << "BackSide" << endl ;
            holderMatrix = holderBackSide ;
        }
        else if ( counter > 5 ){
            break ;
        }
        
        cout << "\t\t" << "Column 0\tColumn 1\tColumn 3" << endl ;
        
        for(int row = 0 ; row < 3 ; row++ ) {
            cout << "Row " << row << "\t\t" << holderMatrix[row][c1] << "\t\t\t" << holderMatrix[row][c2] << "\t\t\t" << holderMatrix[row][c3] << endl ;
        }
        counter++ ;
    }
}

//#0---------------------------------------------------------------------------------------
void rubiksCube:: motionForUpperFromRightToLeft( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    //motion first row
    
    holderMatrix[r1] = holderFrontSide[r1] ;
    holderFrontSide[r1] = holderRightSide[r1] ;
    holderRightSide[r1] = holderBackSide[r1] ;
    holderBackSide[r1] = holderLeftSide[r1] ;
    holderLeftSide[r1] = holderMatrix[r1] ;
    holderMatrix = { } ;
    
    //motion on upper Side note* dont touch r2c2
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c1] = holderMatrix[r3][c1] ;
    holderUpperSide[r1][c2] = holderMatrix[r2][c1] ;
    holderUpperSide[r1][c3] = holderMatrix[r1][c1] ;
    holderUpperSide[r2][c1] = holderMatrix[r3][c2] ;
    holderUpperSide[r2][c3] = holderMatrix[r1][c2] ;
    holderUpperSide[r3][c1] = holderMatrix[r3][c3] ;
    holderUpperSide[r3][c2] = holderMatrix[r2][c3] ;
    holderUpperSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " <<"Turn the top side from right to left. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForUpperFromLeftToRight( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    //motion first row
    holderMatrix[r1] = holderFrontSide[r1] ;
    holderFrontSide[r1] = holderLeftSide[r1] ;
    holderLeftSide[r1] = holderBackSide[r1] ;
    holderBackSide[r1] = holderRightSide[r1] ;
    holderRightSide[r1] = holderMatrix[r1] ;
    holderMatrix = { } ;
    
    //motion on upper Side note* dont touch r2c2
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c1] = holderMatrix[r1][c3] ;
    holderUpperSide[r1][c2] = holderMatrix[r2][c3] ;
    holderUpperSide[r1][c3] = holderMatrix[r3][c3] ;
    holderUpperSide[r2][c1] = holderMatrix[r1][c2] ;
    holderUpperSide[r2][c3] = holderMatrix[r3][c2] ;
    holderUpperSide[r3][c1] = holderMatrix[r1][c1] ;
    holderUpperSide[r3][c2] = holderMatrix[r2][c1] ;
    holderUpperSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " <<  "Turn the top side from left to right. " ;
    meter++ ;
    systemPause() ;
}

void rubiksCube:: motionForLowerFromRightToLeft( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    //motion third row
    holderMatrix[r3] = holderFrontSide[r3] ;
    holderFrontSide[r3] = holderRightSide[r3] ;
    holderRightSide[r3] = holderBackSide[r3] ;
    holderBackSide[r3] = holderLeftSide[r3] ;
    holderLeftSide[r3] = holderMatrix[r3] ;
    holderMatrix = { } ;
    
    //motion on lower Side note* dont touch r2c2
    holderMatrix = holderLowerSide ;
    holderLowerSide[r1][c1] = holderMatrix[r1][c3] ;
    holderLowerSide[r1][c2] = holderMatrix[r2][c3] ;
    holderLowerSide[r1][c3] = holderMatrix[r3][c3] ;
    holderLowerSide[r2][c1] = holderMatrix[r1][c2] ;
    holderLowerSide[r2][c3] = holderMatrix[r3][c2] ;
    holderLowerSide[r3][c1] = holderMatrix[r1][c1] ;
    holderLowerSide[r3][c2] = holderMatrix[r2][c1] ;
    holderLowerSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " <<  "Turn the bottom side from right to left. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForLowerFromLeftToRight( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    //motion third row
    holderMatrix[r3] = holderFrontSide[r3] ;
    holderFrontSide[r3] = holderLeftSide[r3] ;
    holderLeftSide[r3] = holderBackSide[r3] ;
    holderBackSide[r3] = holderRightSide[r3] ;
    holderRightSide[r3] = holderMatrix[r3] ;
    holderMatrix = { } ;
    
    //motion on lower Side note* dont touch r2c2
    holderMatrix = holderLowerSide ;
    holderLowerSide[r1][c1] = holderMatrix[r3][c1] ;
    holderLowerSide[r1][c2] = holderMatrix[r2][c1] ;
    holderLowerSide[r1][c3] = holderMatrix[r1][c1] ;
    holderLowerSide[r2][c1] = holderMatrix[r3][c2] ;
    holderLowerSide[r2][c3] = holderMatrix[r1][c2] ;
    holderLowerSide[r3][c1] = holderMatrix[r3][c3] ;
    holderLowerSide[r3][c2] = holderMatrix[r2][c3] ;
    holderLowerSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " <<  "Turn the bottom side from left to right. " ;
    meter++ ;
    systemPause() ;
    
}

void rubiksCube:: motionForFrontToClockWise( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r3][c3] = holderLeftSide[r1][c3] ;
    holderUpperSide[r3][c2] = holderLeftSide[r2][c3] ;
    holderUpperSide[r3][c1] = holderLeftSide[r3][c3] ;
    holderLeftSide[r1][c3] = holderLowerSide[r1][c1] ;
    holderLeftSide[r2][c3] = holderLowerSide[r1][c2] ;
    holderLeftSide[r3][c3] = holderLowerSide[r1][c3] ;
    holderLowerSide[r1][c1] = holderRightSide[r3][c1] ;
    holderLowerSide[r1][c2] = holderRightSide[r2][c1] ;
    holderLowerSide[r1][c3] = holderRightSide[r1][c1] ;
    holderRightSide[r1][c1] = holderMatrix[r3][c1] ;
    holderRightSide[r2][c1] = holderMatrix[r3][c2] ;
    holderRightSide[r3][c1] = holderMatrix[r3][c3] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderFrontSide ;
    holderFrontSide[r1][c1] = holderMatrix[r3][c1] ;
    holderFrontSide[r1][c2] = holderMatrix[r2][c1] ;
    holderFrontSide[r1][c3] = holderMatrix[r1][c1] ;
    holderFrontSide[r2][c1] = holderMatrix[r3][c2] ;
    holderFrontSide[r2][c3] = holderMatrix[r1][c2] ;
    holderFrontSide[r3][c1] = holderMatrix[r3][c3] ;
    holderFrontSide[r3][c2] = holderMatrix[r2][c3] ;
    holderFrontSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " << "Turn the front side clockwise. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForFrontToCounterClockWise( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r3][c3] = holderRightSide[r3][c1] ;
    holderUpperSide[r3][c2] = holderRightSide[r2][c1] ;
    holderUpperSide[r3][c1] = holderRightSide[r1][c1] ;
    holderRightSide[r3][c1] = holderLowerSide[r1][c1] ;
    holderRightSide[r2][c1] = holderLowerSide[r1][c2] ;
    holderRightSide[r1][c1] = holderLowerSide[r1][c3] ;
    holderLowerSide[r1][c1] = holderLeftSide[r1][c3] ;
    holderLowerSide[r1][c2] = holderLeftSide[r2][c3] ;
    holderLowerSide[r1][c3] = holderLeftSide[r3][c3] ;
    holderLeftSide[r1][c3] = holderMatrix[r3][c3] ;
    holderLeftSide[r2][c3] = holderMatrix[r3][c2] ;
    holderLeftSide[r3][c3] = holderMatrix[r3][c1] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderFrontSide ;
    holderFrontSide[r1][c1] = holderMatrix[r1][c3] ;
    holderFrontSide[r1][c2] = holderMatrix[r2][c3] ;
    holderFrontSide[r1][c3] = holderMatrix[r3][c3] ;
    holderFrontSide[r2][c1] = holderMatrix[r1][c2] ;
    holderFrontSide[r2][c3] = holderMatrix[r3][c2] ;
    holderFrontSide[r3][c1] = holderMatrix[r1][c1] ;
    holderFrontSide[r3][c2] = holderMatrix[r2][c1] ;
    holderFrontSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " << "Turn the front side counterclockwise. " ;
    meter++ ;
    systemPause() ;
}

void rubiksCube:: motionForBackToClockWise( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c3] = holderLeftSide[r1][c1] ;
    holderUpperSide[r1][c2] = holderLeftSide[r2][c1] ;
    holderUpperSide[r1][c1] = holderLeftSide[r3][c1] ;
    holderLeftSide[r1][c1] = holderLowerSide[r3][c1] ;
    holderLeftSide[r2][c1] = holderLowerSide[r3][c2] ;
    holderLeftSide[r3][c1] = holderLowerSide[r3][c3] ;
    holderLowerSide[r3][c1] = holderRightSide[r3][c3] ;
    holderLowerSide[r3][c2] = holderRightSide[r2][c3] ;
    holderLowerSide[r3][c3] = holderRightSide[r1][c3] ;
    holderRightSide[r1][c3] = holderMatrix[r1][c1] ;
    holderRightSide[r2][c3] = holderMatrix[r1][c2] ;
    holderRightSide[r3][c3] = holderMatrix[r1][c3] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderBackSide ;
    holderBackSide[r1][c1] = holderMatrix[r1][c3] ;
    holderBackSide[r1][c2] = holderMatrix[r2][c3] ;
    holderBackSide[r1][c3] = holderMatrix[r3][c3] ;
    holderBackSide[r2][c1] = holderMatrix[r1][c2] ;
    holderBackSide[r2][c3] = holderMatrix[r3][c2] ;
    holderBackSide[r3][c1] = holderMatrix[r1][c1] ;
    holderBackSide[r3][c2] = holderMatrix[r2][c1] ;
    holderBackSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " << "Turn the back side clockwise. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForBackToCounterClockWise( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c3] = holderRightSide[r3][c3] ;
    holderUpperSide[r1][c2] = holderRightSide[r2][c3] ;
    holderUpperSide[r1][c1] = holderRightSide[r1][c3] ;
    holderRightSide[r3][c3] = holderLowerSide[r3][c1] ;
    holderRightSide[r2][c3] = holderLowerSide[r3][c2] ;
    holderRightSide[r1][c3] = holderLowerSide[r3][c3] ;
    holderLowerSide[r3][c1] = holderLeftSide[r1][c1] ;
    holderLowerSide[r3][c2] = holderLeftSide[r2][c1] ;
    holderLowerSide[r3][c3] = holderLeftSide[r3][c1] ;
    holderLeftSide[r1][c1] = holderMatrix[r1][c3] ;
    holderLeftSide[r2][c1] = holderMatrix[r1][c2] ;
    holderLeftSide[r3][c1] = holderMatrix[r1][c1] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderBackSide ;
    holderBackSide[r1][c1] = holderMatrix[r3][c1] ;
    holderBackSide[r1][c2] = holderMatrix[r2][c1] ;
    holderBackSide[r1][c3] = holderMatrix[r1][c1] ;
    holderBackSide[r2][c1] = holderMatrix[r3][c2] ;
    holderBackSide[r2][c3] = holderMatrix[r1][c2] ;
    holderBackSide[r3][c1] = holderMatrix[r3][c3] ;
    holderBackSide[r3][c2] = holderMatrix[r2][c3] ;
    holderBackSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " << "Turn the back side counterclockwise. " ;
    meter++ ;
    systemPause() ;
}

void rubiksCube:: motionForRightToUp( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c3] = holderFrontSide[r1][c3] ;
    holderUpperSide[r2][c3] = holderFrontSide[r2][c3] ;
    holderUpperSide[r3][c3] = holderFrontSide[r3][c3] ;
    holderFrontSide[r1][c3] = holderLowerSide[r1][c3] ;
    holderFrontSide[r2][c3] = holderLowerSide[r2][c3] ;
    holderFrontSide[r3][c3] = holderLowerSide[r3][c3] ;
    holderLowerSide[r1][c3] = holderBackSide[r3][c1] ;
    holderLowerSide[r2][c3] = holderBackSide[r2][c1] ;
    holderLowerSide[r3][c3] = holderBackSide[r1][c1] ;
    holderBackSide[r3][c1] = holderMatrix[r1][c3] ;
    holderBackSide[r2][c1] = holderMatrix[r2][c3] ;
    holderBackSide[r1][c1] = holderMatrix[r3][c3] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderRightSide ;
    holderRightSide[r1][c1] = holderMatrix[r3][c1] ;
    holderRightSide[r1][c2] = holderMatrix[r2][c1] ;
    holderRightSide[r1][c3] = holderMatrix[r1][c1] ;
    holderRightSide[r2][c1] = holderMatrix[r3][c2] ;
    holderRightSide[r2][c3] = holderMatrix[r1][c2] ;
    holderRightSide[r3][c1] = holderMatrix[r3][c3] ;
    holderRightSide[r3][c2] = holderMatrix[r2][c3] ;
    holderRightSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " << "Turn the right side up. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForRightToDown( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r3][c3] = holderBackSide[r1][c1] ;
    holderUpperSide[r2][c3] = holderBackSide[r2][c1] ;
    holderUpperSide[r1][c3] = holderBackSide[r3][c1] ;
    holderBackSide[r3][c1] = holderLowerSide[r1][c3] ;
    holderBackSide[r2][c1] = holderLowerSide[r2][c3] ;
    holderBackSide[r1][c1] = holderLowerSide[r3][c3] ;
    holderLowerSide[r1][c3] = holderFrontSide[r1][c3] ;
    holderLowerSide[r2][c3] = holderFrontSide[r2][c3] ;
    holderLowerSide[r3][c3] = holderFrontSide[r3][c3] ;
    holderFrontSide[r1][c3] = holderMatrix[r1][c3] ;
    holderFrontSide[r2][c3] = holderMatrix[r2][c3] ;
    holderFrontSide[r3][c3] = holderMatrix[r3][c3] ;
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderRightSide ;
    holderRightSide[r1][c1] = holderMatrix[r1][c3] ;
    holderRightSide[r1][c2] = holderMatrix[r2][c3] ;
    holderRightSide[r1][c3] = holderMatrix[r3][c3] ;
    holderRightSide[r2][c1] = holderMatrix[r1][c2] ;
    holderRightSide[r2][c3] = holderMatrix[r3][c2] ;
    holderRightSide[r3][c1] = holderMatrix[r1][c1] ;
    holderRightSide[r3][c2] = holderMatrix[r2][c1] ;
    holderRightSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " << "Turn the right side down. " ;
    meter++ ;
    systemPause() ;
}

void rubiksCube:: motionForLeftToUp( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c1] = holderFrontSide[r1][c1] ;
    holderUpperSide[r2][c1] = holderFrontSide[r2][c1] ;
    holderUpperSide[r3][c1] = holderFrontSide[r3][c1] ;
    holderFrontSide[r1][c1] = holderLowerSide[r1][c1] ;
    holderFrontSide[r2][c1] = holderLowerSide[r2][c1] ;
    holderFrontSide[r3][c1] = holderLowerSide[r3][c1] ;
    holderLowerSide[r3][c1] = holderBackSide[r1][c3] ;
    holderLowerSide[r2][c1] = holderBackSide[r2][c3] ;
    holderLowerSide[r1][c1] = holderBackSide[r3][c3] ;
    holderBackSide[r3][c3] = holderMatrix[r1][c1] ;
    holderBackSide[r2][c3] = holderMatrix[r2][c1] ;
    holderBackSide[r1][c3] = holderMatrix[r3][c1] ;
    
    holderMatrix = { } ;
    
    holderMatrix = holderLeftSide ;
    holderLeftSide[r1][c1] = holderMatrix[r1][c3] ;
    holderLeftSide[r2][c1] = holderMatrix[r1][c2] ;
    holderLeftSide[r3][c1] = holderMatrix[r1][c1] ;
    holderLeftSide[r1][c2] = holderMatrix[r2][c3] ;
    holderLeftSide[r3][c2] = holderMatrix[r2][c1] ;
    holderLeftSide[r1][c3] = holderMatrix[r3][c3] ;
    holderLeftSide[r2][c3] = holderMatrix[r3][c2] ;
    holderLeftSide[r3][c3] = holderMatrix[r3][c1] ;
    
    cout << endl << meter << ". " << "Turn the left side up. " ;
    meter++ ;
    systemPause() ;
    
}
void rubiksCube:: motionForLeftToDown( void ) {
    
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r3][c1] = holderBackSide[r1][c3] ;
    holderUpperSide[r2][c1] = holderBackSide[r2][c3] ;
    holderUpperSide[r1][c1] = holderBackSide[r3][c3] ;
    holderBackSide[r3][c3] = holderLowerSide[r1][c1] ;
    holderBackSide[r2][c3] = holderLowerSide[r2][c1] ;
    holderBackSide[r1][c3] = holderLowerSide[r3][c1] ;
    holderLowerSide[r1][c1] = holderFrontSide[r1][c1] ;
    holderLowerSide[r2][c1] = holderFrontSide[r2][c1] ;
    holderLowerSide[r3][c1] = holderFrontSide[r3][c1] ;
    holderFrontSide[r1][c1] = holderMatrix[r1][c1] ;
    holderFrontSide[r2][c1] = holderMatrix[r2][c1] ;
    holderFrontSide[r3][c1] = holderMatrix[r3][c1] ;
    
    holderMatrix = { } ;
    
    //motion on front Side note* dont touch r2c2
    holderMatrix = holderLeftSide ;
    holderLeftSide[r1][c1] = holderMatrix[r3][c1] ;
    holderLeftSide[r2][c1] = holderMatrix[r3][c2] ;
    holderLeftSide[r3][c1] = holderMatrix[r3][c3] ;
    holderLeftSide[r1][c2] = holderMatrix[r2][c1] ;
    holderLeftSide[r3][c2] = holderMatrix[r2][c3] ;
    holderLeftSide[r1][c3] = holderMatrix[r1][c1] ;
    holderLeftSide[r2][c3] = holderMatrix[r1][c2] ;
    holderLeftSide[r3][c3] = holderMatrix[r1][c3] ;
    
    cout << endl << meter << ". " << "Turn the left side down. " ;
    meter++ ;
    systemPause() ;
}

void rubiksCube:: motionForColumn2ToDown( void ) {
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c2] = holderBackSide[r3][c2] ;
    holderUpperSide[r2][c2] = holderBackSide[r2][c2] ;
    holderUpperSide[r3][c2] = holderBackSide[r1][c2] ;
    holderBackSide[r1][c2] = holderLowerSide[r1][c2] ;
    holderBackSide[r2][c2] = holderLowerSide[r2][c2] ;
    holderBackSide[r3][c2] = holderLowerSide[r3][c2] ;
    holderLowerSide[r1][c2] = holderFrontSide[r1][c2] ;
    holderLowerSide[r2][c2] = holderFrontSide[r2][c2] ;
    holderLowerSide[r3][c2] = holderFrontSide[r3][c2] ;
    holderFrontSide[r1][c2] = holderMatrix[r1][c2] ;
    holderFrontSide[r2][c2] = holderMatrix[r2][c2] ;
    holderFrontSide[r3][c2] = holderMatrix[r3][c2] ;
    holderMatrix = { } ;
    
    cout << endl << meter << ". " << "Trun the Column 2 to down. " ;
    meter++ ;
    systemPause() ;
}
void rubiksCube:: motionForColumn2ToUp( void ) {
    array < array < char , columns > , rows > holderMatrix = { } ;
    
    holderMatrix = holderUpperSide ;
    holderUpperSide[r1][c2] = holderFrontSide[r1][c2] ;
    holderUpperSide[r2][c2] = holderFrontSide[r2][c2] ;
    holderUpperSide[r3][c2] = holderFrontSide[r3][c2] ;
    holderFrontSide[r1][c2] = holderLowerSide[r1][c2] ;
    holderFrontSide[r2][c2] = holderLowerSide[r2][c2] ;
    holderFrontSide[r3][c2] = holderLowerSide[r3][c2] ;
    holderLowerSide[r1][c2] = holderBackSide[r3][c2] ;
    holderLowerSide[r2][c2] = holderBackSide[r2][c2] ;
    holderLowerSide[r3][c2] = holderBackSide[r1][c2] ;
    holderBackSide[r1][c2] = holderMatrix[r3][c2] ;
    holderBackSide[r2][c2] = holderMatrix[r2][c2] ;
    holderBackSide[r3][c2] = holderMatrix[r1][c2] ;
    holderMatrix = { } ;
    
    cout << endl << meter << ". " << "Turn the Column 2 to up. " << endl ;
    meter++ ;
    systemPause() ;
}

//#1---------------------------------------------------------------------------------------

bool rubiksCube:: checkThePlusSignOnLowerSide( void ) {
    if (   holderLowerSide[r1][c2] == holderLowerSide[r2][c2]
        && holderLowerSide[r2][c3] == holderLowerSide[r2][c2]
        && holderLowerSide[r3][c2] == holderLowerSide[r2][c2]
        && holderLowerSide[r2][c1] == holderLowerSide[r2][c2]
        && holderFrontSide[r3][c2] == holderFrontSide[r2][c2]
        && holderRightSide[r3][c2] == holderRightSide[r2][c2]
        && holderLeftSide[r3][c2] == holderLeftSide[r2][c2]
        && holderBackSide[r3][c2] == holderBackSide[r2][c2] ) {
           return true ;
    }
    return false ;
}

bool rubiksCube:: findTheCorrectColourOnFLForPlusSign( void ) {
    cout << "here 1 " << endl ;
    if (   holderLowerSide[r1][c2] == holderLowerSide[r2][c2]
        && holderFrontSide[r3][c2] == holderFrontSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r1][c2] == holderFrontSide[r2][c2]
        && holderFrontSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForFrontToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           motionForRightToDown() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderLowerSide[r2][c2]
        && holderFrontSide[r1][c2] == holderFrontSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderFrontSide[r2][c2]
        && holderFrontSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           motionForLowerFromLeftToRight() ;
           motionForRightToDown() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r2][c1] == holderFrontSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForRightToDown() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderFrontSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForFrontToCounterClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r2][c3] == holderFrontSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForLeftToDown() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderLowerSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r3][c2] == holderFrontSide[r2][c2] ) {
           motionForRightToUp() ;
           motionForLowerFromLeftToRight() ;
           motionForRightToDown() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderLowerSide[r2][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForRightToUp() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r1][c2] == holderFrontSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForRightToDown() ;
           motionForFrontToClockWise() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderFrontSide[r2][c2]
        && holderBackSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForRightToUp() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c1] == holderFrontSide[r2][c2] ) {
           motionForRightToUp() ;
           motionForRightToUp() ;
           motionForFrontToClockWise() ;
           motionForRightToUp() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderLowerSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r3][c2] == holderFrontSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLowerFromRightToLeft() ;
           motionForLeftToDown() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderLowerSide[r2][c1] == holderFrontSide[r2][c2]
        && holderLeftSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForFrontToCounterClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r1][c2] == holderFrontSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderFrontSide[r2][c2]
        && holderLeftSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForLeftToDown() ;
           motionForFrontToCounterClockWise() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c3] == holderFrontSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           motionForFrontToCounterClockWise() ;
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderFrontSide[r2][c2]
        && holderBackSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForLeftToUp() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r3][c2] == holderFrontSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderFrontSide[r2][c2]
        && holderBackSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           motionForRightToUp() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r1][c2] == holderFrontSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderFrontSide[r2][c2]
        && holderBackSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForRightToDown() ;
           motionForFrontToClockWise() ;
           motionForRightToUp() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: findTheCorrectColourOnRLForPlusSign( void ) {
    cout << "here 2 " << endl ;
    if (   holderLowerSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r3][c2] == holderRightSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r2][c3] == holderRightSide[r2][c2]
        && holderRightSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForRightToUp() ;
           motionForLowerFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r1][c2] == holderRightSide[r2][c2] ) {
           motionForRightToDown() ;
           motionForRightToDown() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderRightSide[r2][c2]
        && holderRightSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForRightToDown() ;
           motionForLowerFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r2][c1] == holderRightSide[r2][c2] ) {
           motionForRightToDown() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderRightSide[r2][c2]
        && holderRightSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForFrontToClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderRightSide[r2][c2]
        && holderBackSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForRightToUp() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c1] == holderRightSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForBackToClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderLowerSide[r2][c2]
        && holderFrontSide[r1][c2] == holderRightSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForRightToUp() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderRightSide[r2][c2]
        && holderFrontSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           motionForRightToDown() ;
           motionForFrontToCounterClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r2][c3] == holderRightSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           motionForRightToDown() ;
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderRightSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForFrontToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r1][c2] == holderRightSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForRightToUp() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderRightSide[r2][c2]
        && holderBackSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForRightToUp() ;
           motionForBackToCounterClockWise() ;
           return true ;
    }
    if (   holderBackSide[r2][c3] == holderLowerSide[r2][c2]
        && holderLeftSide[r2][c1] == holderRightSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           motionForRightToUp() ;
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderBackSide[r2][c3] == holderRightSide[r2][c2]
        && holderLeftSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForBackToCounterClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r3][c2] == holderRightSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           motionForBackToClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderRightSide[r2][c2]
        && holderBackSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r1][c2] == holderRightSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForRightToUp() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderRightSide[r2][c2]
        && holderLeftSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForFrontToClockWise() ;
           motionForRightToDown() ;
           motionForFrontToCounterClockWise() ;
           return true ;
    }
    if (   holderLowerSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r3][c2] == holderRightSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForRightToUp() ;
           motionForRightToUp() ;
           return true ;
    }
    if (   holderLowerSide[r2][c1] == holderRightSide[r2][c2]
        && holderLeftSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLowerFromRightToLeft() ;
           motionForFrontToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: findTheCorrectColourOnLLForPlusSign( void ) {
    cout << "here 3 " << endl ;
    if (   holderLowerSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r3][c2] == holderLeftSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r2][c1] == holderLeftSide[r2][c2]
        && holderLeftSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLowerFromLeftToRight() ;
           motionForFrontToCounterClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r1][c2] == holderLeftSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderLeftSide[r2][c2]
        && holderLeftSide[r1][c2] == holderLowerSide[r2][c2]) {
           motionForLeftToDown() ;
           motionForLowerFromLeftToRight() ;
           motionForFrontToCounterClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLeftSide[r2][c2] ) {
           motionForLeftToDown() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderLeftSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForFrontToCounterClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderLeftSide[r2][c2]
        && holderBackSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c3] == holderLeftSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForBackToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderLowerSide[r2][c2]
        && holderFrontSide[r1][c2] == holderLeftSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderLeftSide[r2][c2]
        && holderFrontSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForFrontToCounterClockWise() ;
           motionForLeftToDown() ;
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r2][c1] == holderLeftSide[r2][c2] ) {
           motionForFrontToClockWise() ;
           motionForFrontToClockWise() ;
           motionForLeftToDown() ;
           motionForFrontToClockWise();
           motionForFrontToClockWise() ;
           return true ;
    }
    if (   holderFrontSide[r2][c3] == holderLeftSide[r2][c2]
        && holderRightSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForFrontToClockWise() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r1][c2] == holderLeftSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderLeftSide[r2][c2]
        && holderBackSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           motionForLeftToUp() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r3][c2] == holderLeftSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForLowerFromRightToLeft() ;
           motionForBackToCounterClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderLeftSide[r2][c2]
        && holderBackSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderLeftSide[r2][c2]
        && holderBackSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           motionForLeftToUp() ;
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c1] == holderLeftSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForBackToClockWise() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r1][c2] == holderLeftSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderLeftSide[r2][c2]
        && holderRightSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForBackToCounterClockWise() ;
           motionForLeftToUp() ;
           motionForBackToClockWise() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: findTheCorrectColourOnBLForPlusSign( void ) {
    cout << "here 4 " << endl ;
    if (   holderLowerSide[r3][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r3][c2] == holderBackSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r3][c2] == holderBackSide[r2][c2]
        && holderBackSide[r3][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           motionForLowerFromRightToLeft() ;
           motionForRightToUp() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderLowerSide[r2][c2]
        && holderBackSide[r1][c2] == holderBackSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderBackSide[r2][c2]
        && holderBackSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForBackToClockWise() ;
           motionForLowerFromRightToLeft() ;
           motionForRightToUp() ;
           motionForLowerFromLeftToRight() ;
        return true ;
    }
    if (   holderRightSide[r2][c3] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c1] == holderBackSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           return true ;
    }
    if (   holderRightSide[r2][c3] == holderBackSide[r2][c2]
        && holderBackSide[r2][c1] == holderLowerSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForRightToUp() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderLowerSide[r2][c2]
        && holderBackSide[r2][c3] == holderBackSide[r2][c2] ) {
           motionForBackToCounterClockWise() ;
           return true ;
    }
    if (   holderLeftSide[r2][c1] == holderBackSide[r2][c2]
        && holderBackSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForLeftToUp() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r1][c2] == holderBackSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderBackSide[r2][c2]
        && holderLeftSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForBackToCounterClockWise() ;
           motionForLeftToDown() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderBackSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           motionForBackToCounterClockWise() ;
           motionForLeftToUp() ;
           motionForLeftToUp() ;
           return true ;
    }
    if (   holderFrontSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r2][c3] == holderBackSide[r2][c2] ) {
           motionForLowerFromLeftToRight() ;
           motionForLeftToDown() ;
           motionForLowerFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r1][c2] == holderBackSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r2][c3] == holderBackSide[r2][c2]
        && holderRightSide[r1][c2] == holderLowerSide[r2][c2] ) {
           motionForRightToUp() ;
           motionForBackToClockWise() ;
           motionForRightToDown() ;
           return true ;
    }
    if (   holderRightSide[r2][c1] == holderLowerSide[r2][c2]
        && holderFrontSide[r2][c3] == holderBackSide[r2][c2] ) {
           motionForRightToDown() ;
           motionForRightToDown() ;
           motionForBackToClockWise() ;
           motionForRightToDown() ;
           motionForRightToDown() ;
           return true ;
    }
    if (   holderRightSide[r2][c1] == holderBackSide[r2][c2]
        && holderFrontSide[r2][c3] == holderLowerSide[r2][c2] ) {
           motionForLowerFromRightToLeft() ;
           motionForRightToDown() ;
           motionForLowerFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderLowerSide[r2][c2]
        && holderFrontSide[r1][c2] == holderBackSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           motionForBackToClockWise() ;
           motionForBackToClockWise() ;
           return true ;
    }
    if (   holderUpperSide[r3][c2] == holderBackSide[r2][c2]
        && holderFrontSide[r1][c2] == holderLowerSide[r2][c2] ) {
        motionForUpperFromLeftToRight() ;
        motionForRightToUp() ;
        motionForBackToClockWise() ;
        motionForRightToDown() ;
        return true ;
    }
    return false ;
}

bool rubiksCube:: solutionAlgorithmForPlusSignOnLowerSide( void ) {
    bool control = false ;
    
    control = checkThePlusSignOnLowerSide() ;
    if ( control == false ) {
        findTheCorrectColourOnFLForPlusSign() ;
        findTheCorrectColourOnRLForPlusSign() ;
        findTheCorrectColourOnLLForPlusSign() ;
        findTheCorrectColourOnBLForPlusSign() ;
    }
    return checkThePlusSignOnLowerSide() ;
}

//#2---------------------------------------------------------------------------------------

bool rubiksCube:: checkTheCornerOfLowerSide( void ) {
    
    if (   holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        && holderFrontSide[r3][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r3][c1] == holderRightSide[r2][c2] ) {
        if (   holderLowerSide[r3][c3] == holderLowerSide[r2][c2]
            && holderRightSide[r3][c3] == holderRightSide[r2][c2]
            && holderBackSide[r3][c1] == holderBackSide[r2][c2] ) {
            if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
                && holderLeftSide[r3][c3] == holderLeftSide[r2][c2]
                && holderFrontSide[r3][c1] == holderFrontSide[r2][c2] ) {
                if (   holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
                    && holderLeftSide[r3][c1] == holderLeftSide[r2][c2]
                    && holderBackSide[r3][c3] == holderBackSide[r2][c2] ) {
                    return true ;
                }
            }
        }
    }
    return false ;
}

int rubiksCube:: checkTheCornerOfLRF( void ) {
    if (   holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        && holderFrontSide[r3][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r3][c1] == holderRightSide[r2][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r3][c3] == holderRightSide[r2][c2]
        || holderFrontSide[r3][c3] == holderLowerSide[r2][c2] ) {
        if (   holderRightSide[r3][c1] == holderFrontSide[r2][c2]
            || holderRightSide[r3][c1] == holderLowerSide[r2][c2] ) {
            if (   holderLowerSide[r1][c3] == holderRightSide[r2][c2]
                || holderLowerSide[r1][c3] == holderFrontSide[r2][c2] ) {
                return 2 ;
            }
        }
    }
    return false ;
}
int rubiksCube:: checkTheCornerOfLRB( void ) {
    if (   holderLowerSide[r3][c3] == holderLowerSide[r2][c2]
        && holderRightSide[r3][c3] == holderRightSide[r2][c2]
        && holderBackSide[r3][c1] == holderBackSide[r2][c2] ) {
           return true ;
    }
    if (   holderRightSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c3] == holderBackSide[r2][c2] ) {
        if (   holderLowerSide[r3][c3] == holderRightSide[r2][c2]
            || holderLowerSide[r3][c3] == holderBackSide[r2][c2] ) {
            if (   holderBackSide[r3][c1] == holderLowerSide[r2][c2]
                || holderBackSide[r3][c1] == holderRightSide[r2][c2] ) {
                   return 2 ;
            }
        }
    }
    return false ;
}
int rubiksCube:: checkTheCornerOfLLF( void ) {
    if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r3][c3] == holderLeftSide[r2][c2]
        && holderFrontSide[r3][c1] == holderFrontSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r1][c1] == holderLeftSide[r2][c2]
        || holderLowerSide[r1][c1] == holderFrontSide[r2][c2] ) {
        if (   holderLeftSide[r3][c3] == holderLowerSide[r2][c2]
            || holderLeftSide[r3][c3] == holderFrontSide[r2][c2] ) {
            if (   holderFrontSide[r3][c1] == holderLowerSide[r2][c2]
                || holderFrontSide[r3][c1] == holderLeftSide[r2][c2] ) {
                   return 2 ;
            }
        }
    }
    return false ;
}
int rubiksCube:: checkTheCornerOfLLB( void ) {
    if (   holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
        && holderLeftSide[r3][c1] == holderLeftSide[r2][c2]
        && holderBackSide[r3][c3] == holderBackSide[r2][c2] ) {
           return true ;
    }
    if (   holderLowerSide[r3][c1] == holderLeftSide[r2][c2]
        || holderLowerSide[r3][c1] == holderBackSide[r2][c2] ) {
        if (   holderLeftSide[r3][c1] == holderLowerSide[r2][c2]
            || holderLeftSide[r3][c1] == holderBackSide[r2][c2] ) {
            if (   holderBackSide[r3][c3] == holderLowerSide[r2][c2]
                || holderBackSide[r3][c3] == holderLeftSide[r2][c2] ) {
                   return 2 ;
            }
        }
    }
    return false ;
}

bool rubiksCube:: findTheCorrectCornerOfLRF( void ) {
    if (   holderLowerSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c1] == holderLowerSide[r2][c2] ){
        if (   holderLowerSide[r3][c3] == holderFrontSide[r2][c2]
            || holderRightSide[r3][c3] == holderFrontSide[r2][c2]
            || holderBackSide[r3][c1] == holderFrontSide[r2][c2] ) {
            if (   holderLowerSide[r3][c3] == holderRightSide[r2][c2]
                || holderRightSide[r3][c3] == holderRightSide[r2][c2]
                || holderBackSide[r3][c1] == holderRightSide[r2][c2] ) {
                   motionOfTheLRBCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c1] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r1][c1] == holderFrontSide[r2][c2]
            || holderLeftSide[r3][c3] == holderFrontSide[r2][c2]
            || holderFrontSide[r3][c1] == holderFrontSide[r2][c2] ) {
            if (   holderLowerSide[r1][c1] == holderRightSide[r2][c2]
                || holderLeftSide[r3][c3] == holderRightSide[r2][c2]
                || holderFrontSide[r3][c1] == holderRightSide[r2][c2] ) {
                   motionOfTheLLFCorner() ;
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c3] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r3][c1] == holderFrontSide[r2][c2]
            || holderLeftSide[r3][c1] == holderFrontSide[r2][c2]
            || holderBackSide[r3][c3] == holderFrontSide[r2][c2] ) {
            if (   holderLowerSide[r3][c1] == holderRightSide[r2][c2]
                || holderLeftSide[r3][c1] == holderRightSide[r2][c2]
                || holderBackSide[r3][c3] == holderRightSide[r2][c2] ) {
                   motionOfTheLLBCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLRB( void ) {
    if (   holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c3] == holderLowerSide[r2][c2]) {
        if (   holderLowerSide[r1][c3] == holderRightSide[r2][c2]
            || holderRightSide[r3][c1] == holderRightSide[r2][c2]
            || holderFrontSide[r3][c3] == holderRightSide[r2][c2]) {
            if (   holderLowerSide[r1][c3] == holderBackSide[r2][c2]
                || holderRightSide[r3][c1] == holderBackSide[r2][c2]
                || holderFrontSide[r3][c3] == holderBackSide[r2][c2]) {
                   motionOfTheLRFCorner() ;
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c3] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r3][c1] == holderRightSide[r2][c2]
            || holderLeftSide[r3][c1] == holderRightSide[r2][c2]
            || holderBackSide[r3][c3] == holderRightSide[r2][c2] ) {
            if (   holderLowerSide[r3][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r3][c1] == holderBackSide[r2][c2]
                || holderBackSide[r3][c3] == holderBackSide[r2][c2] ) {
                   motionOfTheLLBCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c1] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r1][c1] == holderBackSide[r2][c2]
            || holderLeftSide[r3][c3] == holderBackSide[r2][c2]
            || holderFrontSide[r3][c1] == holderBackSide[r2][c2] ) {
            if (   holderLowerSide[r1][c1] == holderRightSide[r2][c2]
                || holderLeftSide[r3][c3] == holderRightSide[r2][c2]
                || holderFrontSide[r3][c1] == holderRightSide[r2][c2] ) {
                   motionOfTheLLFCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLLF( void ) {
    if (   holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c3] == holderLowerSide[r2][c2]) {
        if (   holderLowerSide[r1][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r3][c1] == holderLeftSide[r2][c2]
            || holderFrontSide[r3][c3] == holderLeftSide[r2][c2]) {
            if (   holderLowerSide[r1][c3] == holderFrontSide[r2][c2]
                || holderRightSide[r3][c1] == holderFrontSide[r2][c2]
                || holderFrontSide[r3][c3] == holderFrontSide[r2][c2]) {
                   motionOfTheLRFCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c3] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r3][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r3][c1] == holderLeftSide[r2][c2]
            || holderBackSide[r3][c3] == holderLeftSide[r2][c2] ) {
            if (   holderLowerSide[r3][c1] == holderFrontSide[r2][c2]
                || holderLeftSide[r3][c1] == holderFrontSide[r2][c2]
                || holderBackSide[r3][c3] == holderFrontSide[r2][c2] ) {
                   motionOfTheLLBCorner() ;
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c1] == holderLowerSide[r2][c2] ){
        if (   holderLowerSide[r3][c3] == holderFrontSide[r2][c2]
            || holderRightSide[r3][c3] == holderFrontSide[r2][c2]
            || holderBackSide[r3][c1] == holderFrontSide[r2][c2] ) {
            if (   holderLowerSide[r3][c3] == holderLeftSide[r2][c2]
                || holderRightSide[r3][c3] == holderLeftSide[r2][c2]
                || holderBackSide[r3][c1] == holderLeftSide[r2][c2] ) {
                   motionOfTheLRBCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLLB( void ) {
    if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r3][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c1] == holderLowerSide[r2][c2] ) {
        if (   holderLowerSide[r1][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r3][c3] == holderLeftSide[r2][c2]
            || holderFrontSide[r3][c1] == holderLeftSide[r2][c2] ) {
            if (   holderLowerSide[r1][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r3][c3] == holderBackSide[r2][c2]
                || holderFrontSide[r3][c1] == holderBackSide[r2][c2] ) {
                   motionOfTheLLFCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r3][c1] == holderLowerSide[r2][c2] ){
        if (   holderLowerSide[r3][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r3][c3] == holderLeftSide[r2][c2]
            || holderBackSide[r3][c1] == holderLeftSide[r2][c2] ) {
            if (   holderLowerSide[r3][c3] == holderBackSide[r2][c2]
                || holderRightSide[r3][c3] == holderBackSide[r2][c2]
                || holderBackSide[r3][c1] == holderBackSide[r2][c2] ) {
                   motionOfTheLRBCorner() ;
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r3][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r3][c3] == holderLowerSide[r2][c2]) {
        if (   holderLowerSide[r1][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r3][c1] == holderLeftSide[r2][c2]
            || holderFrontSide[r3][c3] == holderLeftSide[r2][c2]) {
            if (   holderLowerSide[r1][c3] == holderBackSide[r2][c2]
                || holderRightSide[r3][c1] == holderBackSide[r2][c2]
                || holderFrontSide[r3][c3] == holderBackSide[r2][c2]) {
                   motionOfTheLRFCorner() ;
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}

bool rubiksCube:: findTheCorrectCornerOfLRFOnUpper( void ) {
    if (   holderUpperSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderRightSide[r2][c2]
            || holderRightSide[r1][c1] == holderRightSide[r2][c2]
            || holderFrontSide[r1][c3] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r3][c3] == holderFrontSide[r2][c2]
                || holderRightSide[r1][c1] == holderFrontSide[r2][c2]
                || holderFrontSide[r1][c3] == holderFrontSide[r2][c2] ) {
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c3] == holderRightSide[r2][c2]
            || holderRightSide[r1][c3] == holderRightSide[r2][c2]
            || holderBackSide[r1][c1] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r1][c3] == holderFrontSide[r2][c2]
                || holderRightSide[r1][c3] == holderFrontSide[r2][c2]
                || holderBackSide[r1][c1] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[c1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c1] == holderRightSide[r2][c2]
            || holderLeftSide[r1][c3] == holderRightSide[r2][c2]
            || holderFrontSide[c1][c1] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r3][c1] == holderFrontSide[r2][c2]
                || holderLeftSide[r1][c3] == holderFrontSide[r2][c2]
                || holderFrontSide[c1][c1] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c1] == holderRightSide[r2][c2]
            || holderLeftSide[r1][c1] == holderRightSide[r2][c2]
            || holderBackSide[r1][c3] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r1][c1] == holderFrontSide[r2][c2]
                || holderLeftSide[r1][c1] == holderFrontSide[r2][c2]
                || holderBackSide[r1][c3] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRFCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLRBOnUpper( void ) {
    if (   holderUpperSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c3] == holderRightSide[r2][c2]
            || holderRightSide[r1][c3] == holderRightSide[r2][c2]
            || holderBackSide[r1][c1] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r1][c3] == holderBackSide[r2][c2]
                || holderRightSide[r1][c3] == holderBackSide[r2][c2]
                || holderBackSide[r1][c1] == holderBackSide[r2][c2] ) {
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[c1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c1] == holderRightSide[r2][c2]
            || holderLeftSide[r1][c3] == holderRightSide[r2][c2]
            || holderFrontSide[c1][c1] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r3][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r1][c3] == holderBackSide[r2][c2]
                || holderFrontSide[c1][c1] == holderBackSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c1] == holderRightSide[r2][c2]
            || holderLeftSide[r1][c1] == holderRightSide[r2][c2]
            || holderBackSide[r1][c3] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r1][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r1][c1] == holderBackSide[r2][c2]
                || holderBackSide[r1][c3] == holderBackSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderRightSide[r2][c2]
            || holderRightSide[r1][c1] == holderRightSide[r2][c2]
            || holderFrontSide[r1][c3] == holderRightSide[r2][c2] ) {
            if (   holderUpperSide[r3][c3] == holderBackSide[r2][c2]
                || holderRightSide[r1][c1] == holderBackSide[r2][c2]
                || holderFrontSide[r1][c3] == holderBackSide[r2][c2] ) {
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLRBCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLLFOnUpper( void ) {
    if (   holderUpperSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[c1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r1][c3] == holderLeftSide[r2][c2]
            || holderFrontSide[c1][c1] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r3][c1] == holderFrontSide[r2][c2]
                || holderLeftSide[r1][c3] == holderFrontSide[r2][c2]
                || holderFrontSide[c1][c1] == holderFrontSide[r2][c2] ) {
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r1][c1] == holderLeftSide[r2][c2]
            || holderFrontSide[r1][c3] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r3][c3] == holderFrontSide[r2][c2]
                || holderRightSide[r1][c1] == holderFrontSide[r2][c2]
                || holderFrontSide[r1][c3] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r1][c3] == holderLeftSide[r2][c2]
            || holderBackSide[r1][c1] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r1][c3] == holderFrontSide[r2][c2]
                || holderRightSide[r1][c3] == holderFrontSide[r2][c2]
                || holderBackSide[r1][c1] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r1][c1] == holderLeftSide[r2][c2]
            || holderBackSide[r1][c3] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r1][c1] == holderFrontSide[r2][c2]
                || holderLeftSide[r1][c1] == holderFrontSide[r2][c2]
                || holderBackSide[r1][c3] == holderFrontSide[r2][c2] ) {
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLLFCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}
bool rubiksCube:: findTheCorrectCornerOfLLBOnUpper( void ) {
    if (   holderUpperSide[r1][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c1] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r1][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r1][c1] == holderLeftSide[r2][c2]
            || holderBackSide[r1][c3] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r1][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r1][c1] == holderBackSide[r2][c2]
                || holderBackSide[r1][c3] == holderBackSide[r2][c2] ) {
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c1] == holderLowerSide[r2][c2]
        || holderLeftSide[r1][c3] == holderLowerSide[r2][c2]
        || holderFrontSide[c1][c1] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c1] == holderLeftSide[r2][c2]
            || holderLeftSide[r1][c3] == holderLeftSide[r2][c2]
            || holderFrontSide[c1][c1] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r3][c1] == holderBackSide[r2][c2]
                || holderLeftSide[r1][c3] == holderBackSide[r2][c2]
                || holderFrontSide[c1][c1] == holderBackSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    if (  holderUpperSide[r1][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c3] == holderLowerSide[r2][c2]
        || holderBackSide[r1][c1] == holderLowerSide[r2][c2] ) {
        if (  holderUpperSide[r1][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r1][c3] == holderLeftSide[r2][c2]
            || holderBackSide[r1][c1] == holderLeftSide[r2][c2] ) {
            if (  holderUpperSide[r1][c3] == holderBackSide[r2][c2]
                || holderRightSide[r1][c3] == holderBackSide[r2][c2]
                || holderBackSide[r1][c1] == holderBackSide[r2][c2] ) {
                   motionForUpperFromLeftToRight() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    if (   holderUpperSide[r3][c3] == holderLowerSide[r2][c2]
        || holderRightSide[r1][c1] == holderLowerSide[r2][c2]
        || holderFrontSide[r1][c3] == holderLowerSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderLeftSide[r2][c2]
            || holderRightSide[r1][c1] == holderLeftSide[r2][c2]
            || holderFrontSide[r1][c3] == holderLeftSide[r2][c2] ) {
            if (   holderUpperSide[r3][c3] == holderBackSide[r2][c2]
                || holderRightSide[r1][c1] == holderBackSide[r2][c2]
                || holderFrontSide[r1][c3] == holderBackSide[r2][c2] ) {
                   motionForUpperFromRightToLeft() ;
                   motionForUpperFromRightToLeft() ;
                   motionOfTheLLBCorner() ;
                   return true ;
            }
        }
    }
    return false ;
}


void rubiksCube:: motionOfTheLRFCorner( void ) {
    motionForFrontToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToClockWise() ;
    motionForUpperFromRightToLeft() ;
}
void rubiksCube:: motionOfTheLRBCorner( void ) {
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
}
void rubiksCube:: motionOfTheLLFCorner( void ) {
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft() ;
}
void rubiksCube:: motionOfTheLLBCorner( void ) {
    motionForBackToClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForBackToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
}

bool rubiksCube:: replaceForLRFCorner( void ) {
    int control = false ;
    
    control = findTheCorrectCornerOfLRF() ;
    if ( control == true ) {
        return true ;
    }
    
    control = findTheCorrectCornerOfLRFOnUpper() ;
    if ( control == true ) {
        return true ;
    }
    
    control = checkTheCornerOfLRF() ;
    if ( control != false ) {
        return true ;
    }
    return false ;
}
bool rubiksCube:: replaceForLRBCorner( void ) {
    int control = false ;
    
    control = findTheCorrectCornerOfLRB() ;
    if ( control == true ) {
        return true ;
    }
    control = findTheCorrectCornerOfLRBOnUpper() ;
    if ( control == true ) {
        return true ;
    }
    control = checkTheCornerOfLRB() ;
    if ( control != false ) {
        return true ;
    }
    return false ;
}
bool rubiksCube:: replaceForLLFCorner( void ) {
    int control = false ;
    
    control = findTheCorrectCornerOfLLF() ;
    if ( control == true ) {
        return true ;
    }
    control = findTheCorrectCornerOfLLFOnUpper() ;
    if ( control == true ) {
        return true ;
    }
    control = checkTheCornerOfLLF() ;
    if ( control != false ) {
        return true ;
    }
    return false ;
}
bool rubiksCube:: replaceForLLBCorner( void ) {
    int control = false ;
    
    control = findTheCorrectCornerOfLLB() ;
    if ( control == true ) {
        return true ;
    }
    control = findTheCorrectCornerOfLLBOnUpper() ;
    if ( control == true ) {
        return true ;
    }
    control = checkTheCornerOfLLB() ;
    if ( control != false ) {
        return true ;
    }
    return false ;
}

void rubiksCube:: motionForTheLRFCorner( void ) {
    int control = false ;
        do {
            control = checkTheCornerOfLRF() ;
            if ( control == 2 ) {
                motionOfTheLRFCorner() ;
                motionOfTheLRFCorner() ;
            }
        } while ( (control != false) && ( control != true ) );
}
void rubiksCube:: motionForTheLRBCorner( void ) {
    int control = false ;
        do {
            control = checkTheCornerOfLRB() ;
            if ( control == 2 ) {
                motionOfTheLRBCorner() ;
                motionOfTheLRBCorner() ;
            }
        } while ( (control != false) && ( control != true ) );
}
void rubiksCube:: motionForTheLLBCorner( void ) {
    int control = false ;
        do {
            control =  checkTheCornerOfLLB() ;
            if ( control == 2 ) {
                motionOfTheLLBCorner() ;
                motionOfTheLLBCorner() ;
            }
        } while ( (control != false) && ( control != true ) );
}
void rubiksCube:: motionForTheLLFCorner( void ) {
    int control = false ;
        do {
            control = checkTheCornerOfLLF() ;
            if ( control == 2 ) {
                motionOfTheLLFCorner() ;
                motionOfTheLLFCorner() ;
            }
        } while ( (control != false) && ( control != true ) );
}

void rubiksCube:: solutionOfTheLRFCorner( void ) {
    replaceForLRFCorner() ;
    motionForTheLRFCorner() ;
}
void rubiksCube:: solutionOfTheLRBCorner( void ) {
    replaceForLRBCorner() ;
    motionForTheLRBCorner() ;
}
void rubiksCube:: solutionOfTheLLFCorner( void ) {
    replaceForLLFCorner() ;
    motionForTheLLFCorner() ;
}
void rubiksCube:: solutionOfTheLLBCorner( void ) {
    replaceForLLBCorner() ;
    motionForTheLLBCorner() ;
}

bool rubiksCube:: solutionAlgorithmOfLowerCorner( void ) {
    if ( meter == 100 ) {
        displayRubiksCube() ;
    }
    solutionOfTheLRFCorner() ;
    if ( meter == 100 ) {
        displayRubiksCube() ;
    }
    solutionOfTheLRBCorner() ;
    if ( meter == 100 ) {
        displayRubiksCube() ;
    }
    solutionOfTheLLFCorner() ;
    if ( meter == 100 ) {
        displayRubiksCube() ;
    }
    solutionOfTheLLBCorner() ;
    if ( meter == 100 ) {
        displayRubiksCube() ;
    }
    return checkTheCornerOfLowerSide() ;
}

//#3---------------------------------------------------------------------------------------

bool rubiksCube:: checkTheSecondLayerEdges( void ) {
    if (   holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
        && holderFrontSide[r2][c1] == holderFrontSide[r2][c2]
        && holderRightSide[r2][c3] == holderRightSide[r2][c2]
        && holderRightSide[r2][c1] == holderRightSide[r2][c2]
        && holderLeftSide[r2][c1] == holderLeftSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLeftSide[r2][c2]
        && holderBackSide[r2][c1] == holderBackSide[r2][c2]
        && holderBackSide[r2][c3] == holderBackSide[r2][c2] ) {
        return true ;
    }
    return false ;
}

bool rubiksCube:: checkTheFREdgeForUpperColour( void ) {
    if (   holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r2][c1] == holderRightSide[r2][c2] ) {
        return true ;
    }
    if (   holderFrontSide[r2][c3] == holderUpperSide[r2][c2]
        || holderRightSide[r2][c1] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheFLEdgeForUpperColour( void ) {
    if (   holderFrontSide[r2][c1] == holderFrontSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLeftSide[r2][c2] ) {
        return true ;
    }
    if (   holderFrontSide[r2][c1] == holderUpperSide[r2][c2]
        || holderLeftSide[r2][c3] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheBREdgeForUpperColour( void ) {
    if (   holderBackSide[r2][c1] == holderBackSide[r2][c2]
        && holderRightSide[r2][c3] == holderRightSide[r2][c2] ) {
        return true ;
    }
    if (   holderBackSide[r2][c1] == holderUpperSide[r2][c2]
        || holderRightSide[r2][c3] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheBLEdgeForUpperColour( void ) {
    if (   holderBackSide[r2][c3] == holderBackSide[r2][c2]
        && holderLeftSide[r2][c1] == holderLeftSide[r2][c2] ) {
        return true ;
    }
    if (   holderBackSide[r2][c3] == holderUpperSide[r2][c2]
        || holderLeftSide[r2][c1] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}

void rubiksCube:: motionOfTheBoxFromFrontToRight( void ) {
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForFrontToClockWise() ;
}
void rubiksCube:: motionOfTheBoxFromFrontToLeft( void ) {
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForFrontToClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionOfTheBoxFromLeftToFront( void ) {
    motionForUpperFromRightToLeft() ;
    motionForFrontToClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
}
void rubiksCube:: motionOfTheBoxFromLeftToBack( void ) {
    motionForUpperFromLeftToRight() ;
    motionForBackToClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForBackToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
}
void rubiksCube:: motionOfTheBoxFromBacktToLeft( void ) {
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForBackToClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForBackToCounterClockWise() ;
}
void rubiksCube:: motionOfTheBoxFromBackToRight( void ) {
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForBackToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForBackToClockWise() ;
}
void rubiksCube:: motionOfTheBoxFromRightToFront( void ) {
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForFrontToClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
}
void rubiksCube:: motionOfTheBoxFromRightToBack( void ) {
    motionForUpperFromRightToLeft() ;
    motionForBackToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForBackToClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
}

bool rubiksCube:: replaceTheBoxOfFREdgeForUpperColour( void ) {
    if (   holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
        && holderRightSide[r2][c1] == holderRightSide[r2][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r2][c3] != holderUpperSide[r2][c2]
        || holderRightSide[r2][c1] != holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
            || holderFrontSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromFrontToRight() ;
               return true ;
        }
        if (   holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
            || holderRightSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromRightToFront() ;
               return true ;
        }
        if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
            || holderBackSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionOfTheBoxFromRightToFront() ;
               return true ;
        }
        if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
            || holderLeftSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               motionOfTheBoxFromFrontToRight() ;
               return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfFLEdgeForUpperColour( void ) {
    if (   holderFrontSide[r2][c1] == holderFrontSide[r2][c2]
        && holderLeftSide[r2][c3] == holderLeftSide[r2][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r2][c1] != holderUpperSide[r2][c2]
        || holderLeftSide[r2][c3] != holderUpperSide[r2][c2] ) {
        if (   holderFrontSide[r1][c2] == holderUpperSide[r2][c2]
            || holderUpperSide[r3][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromFrontToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
            || holderLeftSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromLeftToFront() ;
               return true ;
        }
        if (   holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
            || holderRightSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionOfTheBoxFromFrontToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
            || holderBackSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionOfTheBoxFromLeftToFront() ;
               return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfBREdgeForUpperColour( void ) {
    if (   holderBackSide[r2][c1] == holderBackSide[r2][c2]
        && holderRightSide[r2][c3] == holderRightSide[r2][c2] ) {
           return true ;
    }
    if (   holderBackSide[r2][c1] != holderUpperSide[r2][c2]
        || holderRightSide[r2][c3] != holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
            || holderRightSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromRightToBack() ;
               return true ;
        }
        if (   holderUpperSide[r1][c2] == holderBackSide[r2][c2]
            || holderBackSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromBackToRight() ;
               return true ;
        }
        if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
            || holderLeftSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionOfTheBoxFromBackToRight() ;
               return true ;
        }
        if (   holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
            || holderFrontSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               motionOfTheBoxFromRightToBack() ;
               return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfBLEdgeForUpperColour( void ) {
    if (   holderBackSide[r2][c3] == holderBackSide[r2][c2]
        && holderLeftSide[r2][c1] == holderLeftSide[r2][c2] ) {
           return true ;
    }
    if (   holderBackSide[r2][c3] != holderUpperSide[r2][c2]
        || holderLeftSide[r2][c1] != holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
            || holderBackSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromBacktToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
            || holderLeftSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionOfTheBoxFromLeftToBack() ;
               return true ;
        }
        if (   holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
            || holderRightSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               motionOfTheBoxFromBacktToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
            || holderFrontSide[r1][c2] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionOfTheBoxFromLeftToBack() ;
               return true ;
        }
    }
    return false ;
}

bool rubiksCube:: replaceTheBoxOfFREdge( void ) {
    if ( holderFrontSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderRightSide[r2][c2] ) {
             motionOfTheBoxFromFrontToRight() ;
             return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderRightSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromFrontToRight() ;
             return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderRightSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromFrontToRight() ;
             return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderRightSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromFrontToRight() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfFLEdge( void ) {
    if ( holderFrontSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderLeftSide[r2][c2] ) {
            motionOfTheBoxFromFrontToLeft() ;
            return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderLeftSide[r2][c2] ) {
            motionForUpperFromRightToLeft() ;
            motionOfTheBoxFromFrontToLeft() ;
            return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderLeftSide[r2][c2] ) {
            motionForUpperFromLeftToRight() ;
            motionOfTheBoxFromFrontToLeft() ;
            return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderFrontSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderLeftSide[r2][c2] ) {
            motionForUpperFromRightToLeft() ;
            motionForUpperFromRightToLeft() ;
            motionOfTheBoxFromFrontToLeft() ;
            return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfBREdge( void ) {
    if ( holderBackSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderRightSide[r2][c2] ) {
             motionOfTheBoxFromBackToRight() ;
             return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderRightSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromBackToRight() ;
             return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderRightSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromBackToRight() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderRightSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromBackToRight() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfBLEdge( void ) {
    if ( holderBackSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderLeftSide[r2][c2] ) {
             motionOfTheBoxFromBacktToLeft() ;
             return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderLeftSide[r2][r2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromBacktToLeft() ;
             return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderLeftSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromBacktToLeft() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderBackSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderLeftSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromBacktToLeft() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfRFEdge( void ) {
    if ( holderRightSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderFrontSide[r2][c2] ) {
             motionOfTheBoxFromRightToFront() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderFrontSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromRightToFront() ;
             return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderFrontSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromRightToFront() ;
             return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderFrontSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromRightToFront() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfRBEdge( void ) {
    if ( holderRightSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderBackSide[r2][c2] ) {
             motionOfTheBoxFromRightToBack() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderBackSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromRightToBack() ;
             return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderBackSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromRightToBack() ;
             return true ;
        }
    }
    if ( holderLeftSide[r1][c2] == holderRightSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderBackSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromRightToBack() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfLFEdge( void ) {
    if ( holderLeftSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderFrontSide[r2][c2] ) {
             motionOfTheBoxFromLeftToFront() ;
             return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderFrontSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromLeftToFront() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderFrontSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromLeftToFront() ;
             return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderFrontSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromLeftToFront() ;
             return true ;
        }
    }
    return false ;
}
bool rubiksCube:: replaceTheBoxOfLBEdge( void ) {
    if ( holderLeftSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r2][c1] == holderBackSide[r2][c2] ) {
             motionOfTheBoxFromLeftToBack() ;
             return true ;
        }
    }
    if ( holderBackSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r1][c2] == holderBackSide[r2][c2] ) {
             motionForUpperFromLeftToRight() ;
             motionOfTheBoxFromLeftToBack() ;
             return true ;
        }
    }
    if ( holderFrontSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r3][c2] == holderBackSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromLeftToBack() ;
             return true ;
        }
    }
    if ( holderRightSide[r1][c2] == holderLeftSide[r2][c2] ) {
        if ( holderUpperSide[r2][c3] == holderBackSide[r2][c2] ) {
             motionForUpperFromRightToLeft() ;
             motionForUpperFromRightToLeft() ;
             motionOfTheBoxFromLeftToBack() ;
             return true ;
        }
    }
    return false ;
}

void rubiksCube:: solutionOfTheFREdge( void ) {
    bool control = false ;
    while ( true ) {
        control = checkTheFREdgeForUpperColour() ;
        if ( control == true ) {
            break ;
        }
        replaceTheBoxOfFREdgeForUpperColour() ;
    }
}
void rubiksCube:: solutionOfTheFLEdge( void ) {
    bool control = false ;
    while ( true ) {
        control = checkTheFLEdgeForUpperColour() ;
        if ( control == true ) {
            break ;
        }
        replaceTheBoxOfFLEdgeForUpperColour() ;
    }
}
void rubiksCube:: solutionOfTheBREdge( void ) {
    bool control = false ;
    while ( true ) {
        control = checkTheBREdgeForUpperColour() ;
        if ( control == true ) {
            break ;
        }
        replaceTheBoxOfBREdgeForUpperColour() ;
    }
}
void rubiksCube:: solutionOfTheBLEdge( void ) {
    bool control = false ;
    while ( true ) {
        control = checkTheBLEdgeForUpperColour() ;
        if ( control == true ) {
            break ;
        }
        replaceTheBoxOfBLEdgeForUpperColour() ;
    }
}

void rubiksCube:: motionOfTheSecondLayerForUpperColour( void ) {
    solutionOfTheFREdge() ;
    solutionOfTheFLEdge() ;
    solutionOfTheBREdge() ;
    solutionOfTheBLEdge() ;
}

void rubiksCube:: motionOfTheSecondLayer( void ) {
    bool control = true ;
    replaceTheBoxOfFREdge() ;
    replaceTheBoxOfRFEdge() ;
    replaceTheBoxOfFLEdge() ;
    replaceTheBoxOfLFEdge() ;
    replaceTheBoxOfBREdge() ;
    replaceTheBoxOfRBEdge() ;
    replaceTheBoxOfBLEdge() ;
    replaceTheBoxOfLBEdge() ;
    control = checkTheSecondLayerEdges() ;
    if ( control == false ) {
         replaceTheBoxOfFREdge() ;
         replaceTheBoxOfRFEdge() ;
         replaceTheBoxOfFLEdge() ;
         replaceTheBoxOfLFEdge() ;
         replaceTheBoxOfBREdge() ;
         replaceTheBoxOfRBEdge() ;
         replaceTheBoxOfBLEdge() ;
         replaceTheBoxOfLBEdge() ;
    }
}

bool rubiksCube:: solutionAlgorithmOfSecondLayer( void ) {
    
    motionOfTheSecondLayerForUpperColour() ;
    motionOfTheSecondLayer() ;
    
    return checkTheSecondLayerEdges() ;
}

//#4---------------------------------------------------------------------------------------

bool rubiksCube:: checkThePlusSignOnUpperSide( void ) {
    if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}

bool rubiksCube:: checkTheUpperSideForDotMotion( void ) {
    if (   holderUpperSide[r1][c2] != holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] != holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] != holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] != holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForLineMotion( void ) {
    if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r1][c2] != holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] != holderUpperSide[r2][c2] ) {
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] != holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] != holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForSmallLMotion( void ) {
    if (   holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] != holderUpperSide[r2][c2]
        && holderUpperSide[r1][c2] != holderUpperSide[r2][c2] ) {
           return true ;
    }
    if (   holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r1][c2] != holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] != holderUpperSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] != holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] != holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] != holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] != holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}

void rubiksCube:: motionForDotOnUpperSide( void ) {
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForLineOnUpperSide( void ) {
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForSmallLOnUpperSide( void ) {
    motionForBackToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
    motionForBackToClockWise() ;
}

void rubiksCube:: solutionAtStartingDotFigureOnUpperSide( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForDotMotion() ;
    if ( control == true ) {
        motionForDotOnUpperSide() ;
    }
}
void rubiksCube:: solutionAtStartingLineFigureOnUpperSide( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForLineMotion() ;
    if ( control == true ) {
        motionForLineOnUpperSide() ;
    }
}
void rubiksCube:: solutionAtStartingSmallLFigureOnUpperSide( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForSmallLMotion() ;
    if ( control == true ) {
        motionForSmallLOnUpperSide() ;
    }
}

bool rubiksCube:: solutionAlgorithmForPlusSignOnUpperSide( void ) {
    bool control = false ;
    
    solutionAtStartingDotFigureOnUpperSide() ;
    solutionAtStartingLineFigureOnUpperSide() ;
    solutionAtStartingSmallLFigureOnUpperSide() ;
    
    control = checkThePlusSignOnUpperSide() ;
    
    return control ;
}

//#5---------------------------------------------------------------------------------------

bool rubiksCube:: checkTheUpperSideForCompleted( void ) {
    if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c2] == holderUpperSide[r2][c2]
        && holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c3] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    return false ;
}

bool rubiksCube:: checkTheUpperSideForFigureOfHeadlights( void ) {
    if (   holderUpperSide[r1][c1] == holderUpperSide[r1][c3]
        && holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    if (   holderUpperSide[r1][c3] == holderUpperSide[r3][c3]
        && holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderUpperSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r1][c1] == holderUpperSide[r3][c1]
        && holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r3][c1] == holderUpperSide[r3][c3]
        && holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfPi( void ) {
    if (   holderBackSide[r1][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c3] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c1] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c3] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c3] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c1] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c3] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c3] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c3] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c1] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c3] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfH( void ) {
    if (   holderFrontSide[r1][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c3] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c1] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
            return true ;
    }
    if (   holderRightSide[r1][c1] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c3] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c1] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c3] == holderUpperSide[r2][c2] ) {
            motionForUpperFromRightToLeft() ;
            return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfAntiSune( void ) {
    if (   holderBackSide[r1][c1] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c1] == holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderUpperSide[r2][c2]
            && holderFrontSide[r1][c1] == holderUpperSide[r2][c2] ) {
               return true ;
        }
        if (   holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
            && holderRightSide[r1][c1] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               return true ;
        }
    }
    if (   holderRightSide[r1][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c1] == holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
            && holderLeftSide[r1][c1] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
            && holderBackSide[r1][c1] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionForUpperFromRightToLeft() ;
               return true ;
        }
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfSune( void ) {
    if (   holderFrontSide[r1][c3] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c3] == holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
            && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
               return true ;
        }
        if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
            && holderLeftSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               return true ;
        }
    }
    if (   holderLeftSide[r1][c3] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
        if (   holderUpperSide[r3][c3] == holderUpperSide[r2][c2]
            && holderRightSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               return true ;
        }
        if (   holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
            && holderFrontSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionForUpperFromRightToLeft() ;
               return true ;
        }
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfT( void ) {
    if (   holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c3] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c1] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
           return true ;
    }
    if (   holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c3] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c3] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c1] == holderUpperSide[r2][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
        && holderRightSide[r1][c1] == holderUpperSide[r2][c2]
        && holderLeftSide[r1][c3] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
        && holderFrontSide[r1][c3] == holderUpperSide[r2][c2]
        && holderBackSide[r1][c1] == holderUpperSide[r2][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheUpperSideForFigureOfBowtie( void ) {
    if (   holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c1] == holderUpperSide[r2][c2] ) {
        if (   holderFrontSide[r1][c3] == holderUpperSide[r2][c2]
            && holderLeftSide[r1][c1] == holderUpperSide[r2][c2] ) {
               return true ;
        }
        if (   holderRightSide[r1][c1] == holderUpperSide[r2][c2]
            && holderBackSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               motionForUpperFromRightToLeft() ;
               return true ;
        }
    }
    if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
        && holderUpperSide[r3][c3] == holderUpperSide[r2][c2] ) {
        if (   holderBackSide[r1][c1] == holderUpperSide[r2][c2]
            && holderLeftSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromLeftToRight() ;
               return true ;
        }
        if (   holderFrontSide[r1][c1] == holderUpperSide[r2][c2]
            && holderRightSide[r1][c3] == holderUpperSide[r2][c2] ) {
               motionForUpperFromRightToLeft() ;
               return true ;
        }
    }
    return false ;
}

void rubiksCube:: motionForFigureOfHeadlights( void ) {
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForLowerFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForLowerFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
}
void rubiksCube:: motionForFigureOfPi( void ) {
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
}
void rubiksCube:: motionForFigureOfH( void ) {
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForFigureOfAntiSune( void ) {
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
}
void rubiksCube:: motionForFigureOfSune( void ) {
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
}
void rubiksCube:: motionForFigureOfT( void ) {
    motionForLeftToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForLeftToUp() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForFigureOfBowtie( void ) {
    motionForFrontToCounterClockWise() ;
    motionForLeftToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForLeftToUp() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
}

void rubiksCube:: solutionAtStartingFigureOfHeadlights( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfHeadlights() ;
    if ( control == true ) {
        motionForFigureOfHeadlights() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfPi( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfPi() ;
    if ( control == true ) {
        motionForFigureOfPi() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfH( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfH() ;
    if ( control == true ) {
        motionForFigureOfH() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfAntiSune( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfAntiSune() ;
    if ( control == true ) {
        motionForFigureOfAntiSune() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfSune( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfSune() ;
    if ( control == true ) {
        motionForFigureOfSune() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfT( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfT() ;
    if ( control == true ) {
        motionForFigureOfT() ;
    }
}
void rubiksCube:: solutionAtStartingFigureOfBowtie( void ) {
    bool control = false ;
    
    control = checkTheUpperSideForFigureOfBowtie() ;
    if ( control == true ) {
        motionForFigureOfBowtie() ;
    }
}

bool rubiksCube:: solutionAlgorithmForCompletedOnUpperSide( void ) {
    
    solutionAtStartingFigureOfHeadlights() ;
    solutionAtStartingFigureOfPi() ;
    solutionAtStartingFigureOfH() ;
    solutionAtStartingFigureOfAntiSune() ;
    solutionAtStartingFigureOfSune() ;
    solutionAtStartingFigureOfT() ;
    solutionAtStartingFigureOfBowtie() ;
    
    return checkTheUpperSideForCompleted() ; ;
}

//#6---------------------------------------------------------------------------------------

bool rubiksCube:: checkTheEdgesOfUpperSide( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderFrontSide[r1][c2] ) {
        if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
            && holderRightSide[r1][c3] == holderRightSide[r1][c2] ) {
            if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
                && holderLeftSide[r1][c3] == holderLeftSide[r1][c2] ) {
                if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
                    && holderBackSide[r1][c3] == holderBackSide[r1][c2] ) {
                       return true ;
                }
            }
        }
    }
    return false ;
}
// hepsini kontrol et.
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfUaPerm( void ) {
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfUbPerm( void ) {
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1]  == holderLeftSide[r1][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfZPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfHPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfAaPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c2] == holderRightSide[r1][c1]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c2] == holderFrontSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c2] == holderBackSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c2] == holderLeftSide[r1][c1]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfAbPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c2] == holderBackSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c2] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c2] == holderLeftSide[r1][c1]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c2] == holderFrontSide[r1][c1]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfEPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfRaPerm( void ) {
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c3] == holderBackSide[r1][c2]
        && holderBackSide[r1][c3] == holderRightSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c1]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfRbPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c2] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c2] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c2] == holderLeftSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c2] == holderFrontSide[r1][c1]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfJaPerm( void ) {
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3] ) {
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfJbPerm( void ) {
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c1]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderRightSide[r1][c1] ) {
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c3] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c1]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c1] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderFrontSide[r1][c1]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderRightSide[r1][c1] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c3] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c1]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c1] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfTPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c2] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c2] == holderFrontSide[r1][c1]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c1]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfFPerm( void ) {
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c2] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c2] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3] ) {
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c1]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c2] == holderFrontSide[r1][c3] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderLeftSide[r1][c2] == holderRightSide[r1][c1]
        && holderLeftSide[r1][c2] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c2] == holderBackSide[r1][c1]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c2]
        && holderBackSide[r1][c2] == holderLeftSide[r1][c1] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfVPerm( void ) {
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c2] == holderFrontSide[r1][c1]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c2] == holderLeftSide[r1][c1]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c2] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderLeftSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c2] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c2] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderLeftSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfYPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c2] ) {
           return true ;
    }
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c1]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfNaPerm( void ) {
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c1] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfNbPerm( void ) {
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3] ) {
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfGaPerm( void ) {
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderLeftSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderBackSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderLeftSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderRightSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfGbPerm( void ) {
    if (   holderFrontSide[r1][c2] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c1]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c1]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c2] ) {
           return true ;
    }
    if (   holderLeftSide[r1][c2] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderRightSide[r1][c2] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c1]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c3] == holderBackSide[r1][c1]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderBackSide[r1][c2] == holderBackSide[r1][c3]
        && holderBackSide[r1][c3] == holderRightSide[r1][c1]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c3] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c3] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c3] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfGcPerm( void ) {
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderFrontSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderBackSide[r1][c1] == holderRightSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}
bool rubiksCube:: checkTheEdgesOfUpperSideForFigureOfGdPerm( void ) {
    if (   holderBackSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c3]
        && holderFrontSide[r1][c1] == holderFrontSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c2]
        && holderRightSide[r1][c3] == holderLeftSide[r1][c1]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2] ) {
           return true ;
    }
    if (   holderRightSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderBackSide[r1][c3]
        && holderLeftSide[r1][c1] == holderLeftSide[r1][c3]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c2]
        && holderBackSide[r1][c1] ==  holderFrontSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2] ) {
           motionForUpperFromLeftToRight() ;
           return true ;
    }
    if (   holderLeftSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderRightSide[r1][c1] == holderRightSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2]
        && holderFrontSide[r1][c1] == holderBackSide[r1][c3]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c2]
        && holderLeftSide[r1][c3] == holderBackSide[r1][c1]
        && holderBackSide[r1][c1] == holderFrontSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    if (   holderFrontSide[r1][c1] == holderFrontSide[r1][c2]
        && holderFrontSide[r1][c1] == holderRightSide[r1][c3]
        && holderBackSide[r1][c1] == holderBackSide[r1][c3]
        && holderBackSide[r1][c1] == holderLeftSide[r1][c2]
        && holderLeftSide[r1][c1] == holderFrontSide[r1][c3]
        && holderLeftSide[r1][c1] == holderRightSide[r1][c2]
        && holderRightSide[r1][c1] == holderLeftSide[r1][c3]
        && holderRightSide[r1][c1] == holderBackSide[r1][c2] ) {
           motionForUpperFromRightToLeft() ;
           motionForUpperFromRightToLeft() ;
           return true ;
    }
    return false ;
}

void rubiksCube:: motionForFigureOfUaPerm( void ) {
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
}
void rubiksCube:: motionForFigureOfUbPerm( void ) {
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForColumn2ToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForUpperFromLeftToRight() ;
    motionForColumn2ToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
}
void rubiksCube:: motionForFigureOfZPerm( void ) {
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
}
void rubiksCube:: motionForFigureOfHPerm( void ) {
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForColumn2ToUp() ;
    motionForColumn2ToUp() ;
}
void rubiksCube:: motionForFigureOfAaPerm( void ) {
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToDown() ;
    motionForBackToCounterClockWise() ;
    motionForBackToCounterClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToDown() ;
    motionForBackToCounterClockWise() ;
    motionForBackToCounterClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
}
void rubiksCube:: motionForFigureOfAbPerm( void ) {
    motionForRightToDown() ;
    motionForRightToDown() ;
    motionForBackToCounterClockWise() ;
    motionForBackToCounterClockWise() ;
    motionForRightToUp() ;
    motionForFrontToClockWise() ;
    motionForRightToDown() ;
    motionForBackToCounterClockWise() ;
    motionForBackToCounterClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
}
void rubiksCube:: motionForFigureOfEPerm( void ) {
    motionForRightToUp() ;
    motionForBackToClockWise() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForBackToCounterClockWise() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForBackToCounterClockWise() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForBackToClockWise() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForFigureOfRaPerm( void ){
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForLeftToDown() ;
    motionForFrontToClockWise() ;
    motionForLeftToUp() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft() ;
}
void rubiksCube:: motionForFigureOfRbPerm( void ){
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
}
void rubiksCube:: motionForFigureOfJaPerm( void ){
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForLeftToDown() ;
    motionForFrontToClockWise()  ;
    motionForLeftToUp() ;
    motionForUpperFromLeftToRight()  ;
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft()  ;
    motionForLeftToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForLeftToUp() ;
    motionForLeftToUp() ;
    motionForUpperFromRightToLeft()  ;
    motionForLeftToDown() ;
    motionForUpperFromRightToLeft()  ;
}
void rubiksCube:: motionForFigureOfJbPerm( void ){
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
}
void rubiksCube:: motionForFigureOfTPerm( void ){
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForFigureOfFPerm( void ){
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
}
void rubiksCube:: motionForFigureOfVPerm( void ){
    motionForFrontToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForFrontToClockWise() ;
}
void rubiksCube:: motionForFigureOfYPerm( void ){
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForFrontToCounterClockWise() ;
}
void rubiksCube:: motionForFigureOfNaPerm( void ){
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
}
void rubiksCube:: motionForFigureOfNbPerm( void ){
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForFrontToClockWise() ;
    motionForRightToDown() ;
    motionForFrontToCounterClockWise() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
}
void rubiksCube:: motionForFigureOfGaPerm( void ){
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForLowerFromLeftToRight() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForLowerFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
}
void rubiksCube:: motionForFigureOfGbPerm( void ){
    motionForFrontToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForLowerFromLeftToRight() ;
    motionForBackToClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForBackToCounterClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForBackToCounterClockWise() ;
    motionForLowerFromRightToLeft() ;
    motionForRightToDown() ;
    motionForRightToDown() ;
}
void rubiksCube:: motionForFigureOfGcPerm( void ){
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToUp() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToDown() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForLowerFromRightToLeft() ;
    motionForUpperFromRightToLeft() ;
    motionForRightToUp() ;
    motionForUpperFromLeftToRight() ;
    motionForRightToDown() ;
    motionForLowerFromLeftToRight() ;
    motionForUpperFromLeftToRight() ;
}
void rubiksCube:: motionForFigureOfGdPerm( void ){
    motionForBackToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForBackToClockWise() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
    motionForLowerFromRightToLeft() ;
    motionForFrontToClockWise() ;
    motionForUpperFromLeftToRight() ;
    motionForFrontToCounterClockWise() ;
    motionForUpperFromRightToLeft() ;
    motionForFrontToCounterClockWise() ;
    motionForLowerFromLeftToRight() ;
    motionForRightToUp() ;
    motionForRightToUp() ;
}

void rubiksCube:: solutionOfTheFigureOfUaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfUaPerm() ;
    if ( control == true ) {
        motionForFigureOfUaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfUbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfUbPerm() ;
    if ( control == true ) {
        motionForFigureOfUbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfZPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfZPerm() ;
    if ( control == true ) {
        motionForFigureOfZPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfHPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfHPerm() ;
    if ( control == true ) {
        motionForFigureOfHPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfAaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfAaPerm() ;
    if ( control == true ) {
        motionForFigureOfAaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfAbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfAbPerm() ;
    if ( control == true ) {
        motionForFigureOfAbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfEPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfEPerm() ;
    if ( control == true ) {
        motionForFigureOfEPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfRaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfRaPerm() ;
    if ( control == true ) {
        motionForFigureOfRaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfRbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfRbPerm() ;
    if ( control == true ) {
        motionForFigureOfRbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfJaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfJaPerm() ;
    if ( control == true ) {
        motionForFigureOfJaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfJbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfJbPerm() ;
    if ( control == true ) {
        motionForFigureOfJbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfTPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfTPerm() ;
    if ( control == true ) {
        motionForFigureOfTPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfFPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfFPerm() ;
    if ( control == true ) {
        motionForFigureOfFPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfVPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfVPerm() ;
    if ( control == true ) {
        motionForFigureOfVPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfYPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfYPerm() ;
    if ( control == true ) {
        motionForFigureOfYPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfNaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfNaPerm() ;
    if ( control == true ) {
        motionForFigureOfNaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfNbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfNbPerm() ;
    if ( control == true ) {
        motionForFigureOfNbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfGaPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfGaPerm() ;
    if ( control == true ) {
        motionForFigureOfGaPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfGbPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfGbPerm() ;
    if ( control == true ) {
        motionForFigureOfGbPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfGcPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfGcPerm() ;
    if ( control == true ) {
        motionForFigureOfGcPerm() ;
    }
}
void rubiksCube:: solutionOfTheFigureOfGdPerm( void ) {
    bool control = false ;
    
    control = checkTheEdgesOfUpperSideForFigureOfGdPerm() ;
    if ( control == true ) {
        motionForFigureOfGdPerm() ;
    }
}
bool rubiksCube:: solutionAlgorithmOfUpperSidesEdges( void ) {
    bool control = false ;
    
    solutionOfTheFigureOfUaPerm() ;
    solutionOfTheFigureOfUbPerm() ;
    solutionOfTheFigureOfZPerm() ;
    solutionOfTheFigureOfHPerm() ;
    solutionOfTheFigureOfAaPerm() ;
    solutionOfTheFigureOfAbPerm() ;
    solutionOfTheFigureOfEPerm() ;
    solutionOfTheFigureOfRaPerm() ;
    solutionOfTheFigureOfRbPerm() ;
    solutionOfTheFigureOfJaPerm() ;
    solutionOfTheFigureOfJbPerm() ;
    solutionOfTheFigureOfTPerm() ;
    solutionOfTheFigureOfFPerm() ;
    solutionOfTheFigureOfVPerm() ;
    solutionOfTheFigureOfYPerm() ;
    solutionOfTheFigureOfNaPerm() ;
    solutionOfTheFigureOfNbPerm() ;
    solutionOfTheFigureOfGaPerm() ;
    solutionOfTheFigureOfGbPerm() ;
    solutionOfTheFigureOfGcPerm() ;
    solutionOfTheFigureOfGdPerm() ;
    
    control = checkTheEdgesOfUpperSide() ;
    return control ;
}

//#7---------------------------------------------------------------------------------------

bool rubiksCube:: checkBetweenThirdLayerAndSecondLayer( void ) {
    if ( holderFrontSide[r3][c2] == holderFrontSide[r2][c2] ) {
         return true ;
    }
    if ( holderFrontSide[r3][c2] == holderLeftSide[c2][c2] ) {
         motionForLowerFromRightToLeft() ;
         return true ;
    }
    if ( holderFrontSide[r3][c2] == holderRightSide[r2][c2] ) {
         motionForLowerFromLeftToRight() ;
         return true ;
    }
    if ( holderFrontSide[r3][c2] == holderBackSide[r2][c2] ) {
         motionForLowerFromRightToLeft() ;
         motionForLowerFromRightToLeft() ;
         return true ;
    }
    return false ;
}
bool rubiksCube:: checkBetweenSecondLayerAndFirsrLayer( void ) {
    if ( holderFrontSide[r1][c2] == holderFrontSide[r2][c2] ) {
         return true ;
    }
    if ( holderFrontSide[r1][c2] == holderLeftSide[r2][c2] ) {
         motionForUpperFromRightToLeft() ;
         return true ;
    }
    if ( holderFrontSide[r1][c2] == holderRightSide[r2][c2] ) {
         motionForUpperFromLeftToRight() ;
         return true ;
    }
    if ( holderFrontSide[r1][c2] == holderBackSide[r2][c2] ) {
         motionForUpperFromRightToLeft() ;
         motionForUpperFromRightToLeft() ;
         return true ;
    }
    return false ;
}

//#8---------------------------------------------------------------------------------------

bool rubiksCube:: checkTheRubiksCubeBeforeAndAfterSolution( void ) {
    if (   holderLowerSide[r1][c1] == holderLowerSide[r2][c2]
        && holderLowerSide[r2][c1] == holderLowerSide[r2][c2]
        && holderLowerSide[r3][c1] == holderLowerSide[r2][c2]
        && holderLowerSide[r1][c2] == holderLowerSide[r2][c2]
        && holderLowerSide[r2][c3] == holderLowerSide[r2][c2]
        && holderLowerSide[r1][c3] == holderLowerSide[r2][c2]
        && holderLowerSide[r2][c3] == holderLowerSide[r2][c2]
        && holderLowerSide[r3][c3] == holderLowerSide[r2][c2] ) {
        if (   holderRightSide[r1][c1] == holderRightSide[r2][c2]
            && holderRightSide[r2][c1] == holderRightSide[r2][c2]
            && holderRightSide[r3][c1] == holderRightSide[r2][c2]
            && holderRightSide[r1][c2] == holderRightSide[r2][c2]
            && holderRightSide[r2][c3] == holderRightSide[r2][c2]
            && holderRightSide[r1][c3] == holderRightSide[r2][c2]
            && holderRightSide[r2][c3] == holderRightSide[r2][c2]
            && holderRightSide[r3][c3] == holderRightSide[r2][c2] ) {
            if (   holderLeftSide[r1][c1] == holderLeftSide[r2][c2]
                && holderLeftSide[r2][c1] == holderLeftSide[r2][c2]
                && holderLeftSide[r3][c1] == holderLeftSide[r2][c2]
                && holderLeftSide[r1][c2] == holderLeftSide[r2][c2]
                && holderLeftSide[r2][c3] == holderLeftSide[r2][c2]
                && holderLeftSide[r1][c3] == holderLeftSide[r2][c2]
                && holderLeftSide[r2][c3] == holderLeftSide[r2][c2]
                && holderLeftSide[r3][c3] == holderLeftSide[r2][c2] ) {
                if (   holderUpperSide[r1][c1] == holderUpperSide[r2][c2]
                    && holderUpperSide[r2][c1] == holderUpperSide[r2][c2]
                    && holderUpperSide[r3][c1] == holderUpperSide[r2][c2]
                    && holderUpperSide[r1][c2] == holderUpperSide[r2][c2]
                    && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
                    && holderUpperSide[r1][c3] == holderUpperSide[r2][c2]
                    && holderUpperSide[r2][c3] == holderUpperSide[r2][c2]
                    && holderUpperSide[r3][c3] == holderUpperSide[r2][c2] ) {
                    if (   holderFrontSide[r1][c1] == holderFrontSide[r2][c2]
                        && holderFrontSide[r2][c1] == holderFrontSide[r2][c2]
                        && holderFrontSide[r3][c1] == holderFrontSide[r2][c2]
                        && holderFrontSide[r1][c2] == holderFrontSide[r2][c2]
                        && holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
                        && holderFrontSide[r1][c3] == holderFrontSide[r2][c2]
                        && holderFrontSide[r2][c3] == holderFrontSide[r2][c2]
                        && holderFrontSide[r3][c3] == holderFrontSide[r2][c2] ) {
                        if (   holderBackSide[r1][c1] == holderBackSide[r2][c2]
                            && holderBackSide[r2][c1] == holderBackSide[r2][c2]
                            && holderBackSide[r3][c1] == holderBackSide[r2][c2]
                            && holderBackSide[r1][c2] == holderBackSide[r2][c2]
                            && holderBackSide[r2][c3] == holderBackSide[r2][c2]
                            && holderBackSide[r1][c3] == holderBackSide[r2][c2]
                            && holderBackSide[r2][c3] == holderBackSide[r2][c2]
                            && holderBackSide[r3][c3] == holderBackSide[r2][c2] ) {
                            return true ;
                        }
                    }
                }
            }
        }
    }
    return false ;
}

int rubiksCube:: solutionAlgorithmForRubiksCube( void ) {
    bool control = false ;
    int sumNow = 0 ;
    int sumBefore = 0 ;
    
    control = checkTheRubiksCubeBeforeAndAfterSolution() ;
    if ( control == false ) {
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmForPlusSignOnLowerSide() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmOfLowerCorner() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmOfSecondLayer() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmForPlusSignOnUpperSide() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmForCompletedOnUpperSide() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        sumBefore = sumNow ;
        sumNow = sumNow + solutionAlgorithmOfUpperSidesEdges() ;
        if ( sumNow == sumBefore ) {
            cerr << endl << "!!!!!!!!!!!!!!!!! " << endl << "!Something wrong!" << endl << "!!!!!!!!!!!!!!!!! " << endl ;
            return -1 ;
        }
        systemPause() ;
        displayRubiksCube() ;
        systemPause() ;
        
        control = checkTheRubiksCubeBeforeAndAfterSolution() ;
        if ( control == false ) {
            checkBetweenThirdLayerAndSecondLayer() ;
            checkBetweenSecondLayerAndFirsrLayer() ;
        }
    }
    
    cout << endl << "Number of successful process: " << sumNow << endl ;
    
    control = checkTheRubiksCubeBeforeAndAfterSolution() ;
    return control ;
}
