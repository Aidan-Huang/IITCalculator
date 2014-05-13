//
//  IITCalculatorController.h
//  NZKeyboard
//
//  Created by Kevin Nick on 2012-11-9.
//  Copyright (c) 2012年 com.zen. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "IncomeDetailController.h"
#import "MapController.h"
#import "SettingsController.h"
#import "HistoryController.h"

#import "IITCalculator.h"

<<<<<<< HEAD
@interface IITCalculatorController : UIViewController <UITextFieldDelegate, MapControllerDelegate, SettingsControllerDelegate> {

    MapController *mapController;
=======
@interface IITCalculatorController : UIViewController <UITextFieldDelegate, MapControllerDelegate> {

>>>>>>> parent of 9b2262f... V1.2(1227)
}

// outlets
@property (nonatomic, strong) ZenKeyboard *keyboardView;
@property (nonatomic, strong) ZenTextField *tfPreTaxIncome;
@property (nonatomic, strong) UIButton *lbCity;

@property (nonatomic, strong) IITCalculator *calculator;
<<<<<<< HEAD
@property (nonatomic, assign) double pmu;
@property (nonatomic, assign) double housingFund;
=======
>>>>>>> parent of 9b2262f... V1.2(1227)

@end
