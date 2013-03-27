//
//  CustomAlertView.h
//  T3Lockey
//
//  Created by Alex Petrinich on 4/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

enum
{
    LoginError           = 1,
    RegistrationError    = 2,
    UploadError          = 3,
    ConfirmPassword      = 4,
    ValidError           = 5,
    SettingsError       = 6,
    InternetError        = 11,
    RenameError          = 12,
    ServerError         = 13,
    MainScreen          = 14,
};

typedef void(^AlertBlock)(UIAlertView *_alert);

@interface CustomAlertView : UIAlertView
{
    AlertBlock             cancelBlock, completeBlock;
    int                    type;
}

@property (nonatomic, copy) AlertBlock cancelBlock;
@property (nonatomic, copy) AlertBlock completeBlock;
@property (nonatomic) int type;

@end
