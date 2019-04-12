#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Macro.h"
#import "NSDate+XZDate.h"
#import "NSDictionary+XZDictionary.h"
#import "NSString+XZString.h"
#import "NSTimer+XZtimer.h"
#import "UIButton+XZButton.h"
#import "UIImage+XZImage.h"
#import "UITextField+XZTextField.h"
#import "UITextView+XZTextView.h"
#import "UIViewController+XZViewController.h"

FOUNDATION_EXPORT double XZManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char XZManagerVersionString[];

