//
//  RubiksCube.hpp
//  Solution Of Rubik's Cube
//
//  Created by AHMET DÜNDAR on 24.02.2019.
//  Copyright © 2019 AHMET DÜNDAR. All rights reserved.
//

#ifndef RubiksCube_hpp
#define RubiksCube_hpp

#include <iostream>
#include <array>

#define rows 3
#define columns 3
#define r1 0
#define c1 0
#define r2 1
#define c2 1
#define r3 2
#define c3 2

using namespace std ;

class rubiksCube {
    
public:
    
    //--------------------------------------------------------------------------------
                                                                                   //|
    void setUpperSide ( array < array < char , columns > , rows > &upperSidePtr ) ;//|
    void setLowerSide ( array < array < char , columns > , rows > &lowerSidePtr ) ;//|
    void setRightSide ( array < array < char , columns > , rows > &rightSidePtr ) ;//|
    void setFrontSide ( array < array < char , columns > , rows > &frontSidePtr ) ;//|
    void setLeftSide ( array < array < char , columns > , rows > &leftSidePtr ) ;  //|
    void setBackSide ( array < array < char , columns > , rows > &backSidePtr ) ;  //|
                                                                                   //|
    array < array < char , columns > , rows > getFrontSide ( void ) ;              //|
    array < array < char , columns > , rows > getBackSide ( void ) ;               //|
    array < array < char , columns > , rows > getUpperSide ( void ) ;              //|
    array < array < char , columns > , rows > getLowerSide ( void ) ;              //|
    array < array < char , columns > , rows > getRightSide ( void ) ;              //|
    array < array < char , columns > , rows > getLeftSide ( void ) ;               //|
                                                                                   //|
    //--------------------------------------------------------------------------------
                                                                                   //|
    void systemPause ( void ) const ;                                              //|
    bool checkTheRubiksCube ( void ) ;                                             //|
    void initializationTheCubeOfSide ( void ) ;                                    //|
    void displayRubiksCube ( void ) ;                                              //|
                                                                                   //|
    //#0------------------------------------------------------------------------------
                                                                                   //|
    void motionForUpperFromRightToLeft ( void ) ;                                  //|
    void motionForUpperFromLeftToRight ( void ) ;                                  //|
                                                                                   //|
    void motionForLowerFromRightToLeft ( void ) ;                                  //|
    void motionForLowerFromLeftToRight ( void ) ;                                  //|
                                                                                   //|
    void motionForFrontToClockWise ( void ) ;                                      //|
    void motionForFrontToCounterClockWise ( void ) ;                               //|
                                                                                   //|
    void motionForBackToClockWise ( void ) ;                                       //|
    void motionForBackToCounterClockWise ( void ) ;                                //|
                                                                                   //|
    void motionForRightToUp ( void ) ;                                             //|
    void motionForRightToDown ( void ) ;                                           //|
                                                                                   //|
    void motionForLeftToUp ( void ) ;                                              //|
    void motionForLeftToDown ( void ) ;                                            //|
                                                                                   //|
    void motionForColumn2ToDown ( void ) ;                                         //|
    void motionForColumn2ToUp ( void ) ;                                           //|
                                                                                   //|
    //#1--------------------------------||--------------------------------------------
    //plus sign for lower               \/                                         //|
    bool checkThePlusSignOnLowerSide ( void ) ;                                    //|
                                                                                   //|
    bool findTheCorrectColourOnFLForPlusSign ( void ) ;                            //|
    bool findTheCorrectColourOnRLForPlusSign ( void ) ;                            //|
    bool findTheCorrectColourOnLLForPlusSign ( void ) ;                            //|
    bool findTheCorrectColourOnBLForPlusSign ( void ) ;                            //|
                                                                                   //|
    bool solutionAlgorithmForPlusSignOnLowerSide ( void ) ;                        //|
                                                                                   //|
    //#2--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkTheCornerOfLowerSide ( void ) ;                                      //|
                                                                                   //|
    int checkTheCornerOfLRF ( void ) ;                                             //|
    int checkTheCornerOfLRB ( void ) ;                                             //|
    int checkTheCornerOfLLF ( void ) ;                                             //|
    int checkTheCornerOfLLB ( void ) ;                                             //|
                                                                                   //|
    bool findTheCorrectCornerOfLRF ( void ) ;                                      //|
    bool findTheCorrectCornerOfLRB ( void ) ;                                      //|
    bool findTheCorrectCornerOfLLF ( void ) ;                                      //|
    bool findTheCorrectCornerOfLLB ( void ) ;                                      //|
                                                                                   //|
    bool findTheCorrectCornerOfLRFOnUpper ( void ) ;                               //|
    bool findTheCorrectCornerOfLRBOnUpper ( void ) ;                               //|
    bool findTheCorrectCornerOfLLFOnUpper ( void ) ;                               //|
    bool findTheCorrectCornerOfLLBOnUpper ( void ) ;                               //|
                                                                                   //|
    void motionOfTheLRFCorner ( void ) ;                                           //|
    void motionOfTheLRBCorner ( void ) ;                                           //|
    void motionOfTheLLFCorner ( void ) ;                                           //|
    void motionOfTheLLBCorner ( void ) ;                                           //|
                                                                                   //|
    bool replaceForLRFCorner ( void ) ;                                            //|
    bool replaceForLRBCorner ( void ) ;                                            //|
    bool replaceForLLFCorner ( void ) ;                                            //|
    bool replaceForLLBCorner ( void ) ;                                            //|
                                                                                   //|
    void motionForTheLRFCorner ( void ) ;                                          //|
    void motionForTheLRBCorner ( void ) ;                                          //|
    void motionForTheLLFCorner ( void ) ;                                          //|
    void motionForTheLLBCorner ( void ) ;                                          //|
                                                                                   //|
    void solutionOfTheLRFCorner ( void ) ;                                         //|
    void solutionOfTheLRBCorner ( void ) ;                                         //|
    void solutionOfTheLLFCorner ( void ) ;                                         //|
    void solutionOfTheLLBCorner ( void ) ;                                         //|
                                                                                   //|
    bool solutionAlgorithmOfLowerCorner ( void ) ;                                 //|
                                                                                   //|
    //#3--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkTheSecondLayerEdges ( void ) ;                                       //|
                                                                                   //|
    bool checkTheFREdgeForUpperColour ( void ) ;                                   //|
    bool checkTheFLEdgeForUpperColour ( void ) ;                                   //|
    bool checkTheBREdgeForUpperColour ( void ) ;                                   //|
    bool checkTheBLEdgeForUpperColour ( void ) ;                                   //|
                                                                                   //|
    void motionOfTheBoxFromFrontToRight ( void ) ;                                 //|
    void motionOfTheBoxFromFrontToLeft ( void ) ;                                  //|
    void motionOfTheBoxFromLeftToFront ( void ) ;                                  //|
    void motionOfTheBoxFromLeftToBack ( void ) ;                                   //|
    void motionOfTheBoxFromBacktToLeft ( void ) ;                                  //|
    void motionOfTheBoxFromBackToRight ( void ) ;                                  //|
    void motionOfTheBoxFromRightToFront ( void ) ;                                 //|
    void motionOfTheBoxFromRightToBack ( void ) ;                                  //|
                                                                                   //|
    bool replaceTheBoxOfFREdgeForUpperColour ( void ) ;                            //|
    bool replaceTheBoxOfFLEdgeForUpperColour ( void ) ;                            //|
    bool replaceTheBoxOfBREdgeForUpperColour ( void ) ;                            //|
    bool replaceTheBoxOfBLEdgeForUpperColour ( void ) ;                            //|
                                                                                   //|
    bool replaceTheBoxOfFREdge ( void ) ;                                          //|
    bool replaceTheBoxOfFLEdge ( void ) ;                                          //|
    bool replaceTheBoxOfBREdge ( void ) ;                                          //|
    bool replaceTheBoxOfBLEdge ( void ) ;                                          //|
    bool replaceTheBoxOfRFEdge ( void ) ;                                          //|
    bool replaceTheBoxOfRBEdge ( void ) ;                                          //|
    bool replaceTheBoxOfLFEdge ( void ) ;                                          //|
    bool replaceTheBoxOfLBEdge ( void ) ;                                          //|
                                                                                   //|
    void motionOfTheSecondLayerForUpperColour ( void ) ;                           //|
    void motionOfTheSecondLayer ( void ) ;                                         //|
                                                                                   //|
    void solutionOfTheFREdge ( void ) ;                                            //|
    void solutionOfTheFLEdge ( void ) ;                                            //|
    void solutionOfTheBREdge ( void ) ;                                            //|
    void solutionOfTheBLEdge ( void ) ;                                            //|
                                                                                   //|
    bool solutionAlgorithmOfSecondLayer ( void ) ;                                 //|
                                                                                   //|
    //#4--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkThePlusSignOnUpperSide ( void ) ;                                    //|
                                                                                   //|
    bool checkTheUpperSideForDotMotion ( void ) ;                                  //|
    bool checkTheUpperSideForLineMotion ( void ) ;                                 //|
    bool checkTheUpperSideForSmallLMotion ( void ) ;                               //|
                                                                                   //|
    void motionForDotOnUpperSide ( void ) ;                                        //|
    void motionForSmallLOnUpperSide ( void ) ;                                     //|
    void motionForLineOnUpperSide ( void ) ;                                       //|
                                                                                   //|
    void solutionAtStartingDotFigureOnUpperSide ( void ) ;                         //|
    void solutionAtStartingLineFigureOnUpperSide ( void ) ;                        //|
    void solutionAtStartingSmallLFigureOnUpperSide ( void ) ;                      //|
                                                                                   //|
    bool solutionAlgorithmForPlusSignOnUpperSide ( void ) ;                        //|
                                                                                   //|
    //#5--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkTheUpperSideForCompleted ( void ) ;                                  //|
                                                                                   //|
    bool checkTheUpperSideForFigureOfHeadlights ( void ) ;                         //|
    bool checkTheUpperSideForFigureOfPi ( void ) ;                                 //|
    bool checkTheUpperSideForFigureOfH ( void ) ;                                  //|
    bool checkTheUpperSideForFigureOfAntiSune ( void ) ;                           //|
    bool checkTheUpperSideForFigureOfSune ( void ) ;                               //|
    bool checkTheUpperSideForFigureOfT ( void ) ;                                  //|
    bool checkTheUpperSideForFigureOfBowtie ( void ) ;                             //|
                                                                                   //|
    void motionForFigureOfHeadlights ( void ) ;                                    //|
    void motionForFigureOfPi ( void ) ;                                            //|
    void motionForFigureOfH ( void ) ;                                             //|
    void motionForFigureOfAntiSune ( void ) ;                                      //|
    void motionForFigureOfSune ( void ) ;                                          //|
    void motionForFigureOfT ( void ) ;                                             //|
    void motionForFigureOfBowtie ( void ) ;                                        //|
                                                                                   //|
    void solutionAtStartingFigureOfHeadlights ( void ) ;                           //|
    void solutionAtStartingFigureOfPi ( void ) ;                                   //|
    void solutionAtStartingFigureOfH ( void ) ;                                    //|
    void solutionAtStartingFigureOfAntiSune ( void ) ;                             //|
    void solutionAtStartingFigureOfSune ( void ) ;                                 //|
    void solutionAtStartingFigureOfT ( void ) ;                                    //|
    void solutionAtStartingFigureOfBowtie ( void ) ;                               //|
                                                                                   //|
    bool solutionAlgorithmForCompletedOnUpperSide ( void ) ;                       //|
                                                                                   //|
    //#6--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkTheEdgesOfUpperSide ( void ) ;                                       //|
                                                                                   //|
    bool checkTheEdgesOfUpperSideForFigureOfUaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfUbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfZPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfHPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfAaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfAbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfEPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfRaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfRbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfJaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfJbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfTPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfFPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfVPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfYPerm ( void ) ;                       //|
    bool checkTheEdgesOfUpperSideForFigureOfNaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfNbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfGaPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfGbPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfGcPerm ( void ) ;                      //|
    bool checkTheEdgesOfUpperSideForFigureOfGdPerm ( void ) ;                      //|
                                                                                   //|
    void motionForFigureOfUaPerm ( void ) ;                                        //|
    void motionForFigureOfUbPerm ( void ) ;                                        //|
    void motionForFigureOfZPerm ( void ) ;                                         //|
    void motionForFigureOfHPerm ( void ) ;                                         //|
    void motionForFigureOfAaPerm ( void ) ;                                        //|
    void motionForFigureOfAbPerm ( void ) ;                                        //|
    void motionForFigureOfEPerm ( void ) ;                                         //|
    void motionForFigureOfRaPerm ( void ) ;                                        //|
    void motionForFigureOfRbPerm ( void ) ;                                        //|
    void motionForFigureOfJaPerm ( void ) ;                                        //|
    void motionForFigureOfJbPerm ( void ) ;                                        //|
    void motionForFigureOfTPerm ( void ) ;                                         //|
    void motionForFigureOfFPerm ( void ) ;                                         //|
    void motionForFigureOfVPerm ( void ) ;                                         //|
    void motionForFigureOfYPerm ( void ) ;                                         //|
    void motionForFigureOfNaPerm ( void ) ;                                        //|
    void motionForFigureOfNbPerm ( void ) ;                                        //|
    void motionForFigureOfGaPerm ( void ) ;                                        //|
    void motionForFigureOfGbPerm ( void ) ;                                        //|
    void motionForFigureOfGcPerm ( void ) ;                                        //|
    void motionForFigureOfGdPerm ( void ) ;                                        //|
                                                                                   //|
    void solutionOfTheFigureOfUaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfUbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfZPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfHPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfAaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfAbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfEPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfRaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfRbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfJaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfJbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfTPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfFPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfVPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfYPerm ( void ) ;                                     //|
    void solutionOfTheFigureOfNaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfNbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfGaPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfGbPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfGcPerm ( void ) ;                                    //|
    void solutionOfTheFigureOfGdPerm ( void ) ;                                    //|
                                                                                   //|
    bool solutionAlgorithmOfUpperSidesEdges ( void ) ;                             //|
                                                                                   //|
    //#7--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkBetweenThirdLayerAndSecondLayer ( void ) ;                           //|
    bool checkBetweenSecondLayerAndFirsrLayer ( void ) ;                           //|
                                                                                   //|
    //#8--------------------------------||--------------------------------------------
    //                                  \/                                         //|
    bool checkTheRubiksCubeAfterSolution ( void ) ;                                //|
                                                                                   //|
    bool solutionAlgorithmForRubiksCube ( void ) ;                                 //|
                                                                                   //|
    //--------------------------------------------------------------------------------
private:
    //--------------------------------------------------------------------------------
                                                                                   //|
    int meter = 0 ;                                                                //|
    array < array < char , columns > , rows > upperSide = { } ;                    //|
    array < array < char , columns > , rows > lowerSide = { } ;                    //|
    array < array < char , columns > , rows > rightSide = { } ;                    //|
    array < array < char , columns > , rows > frontSide = { } ;                    //|
    array < array < char , columns > , rows > leftSide = { } ;                     //|
    array < array < char , columns > , rows > backSide = { } ;                     //|
                                                                                   //|
    //--------------------------------------------------------------------------------
                                                                                   //|
    array < array < char , columns > , rows > holderUpperSide = { } ;              //|
    array < array < char , columns > , rows > holderLowerSide = { } ;              //|
    array < array < char , columns > , rows > holderRightSide = { } ;              //|
    array < array < char , columns > , rows > holderFrontSide = { } ;              //|
    array < array < char , columns > , rows > holderLeftSide = { } ;               //|
    array < array < char , columns > , rows > holderBackSide = { } ;               //|
                                                                                   //|
    //--------------------------------------------------------------------------------
} ;


#endif /* RubiksCube_hpp */
