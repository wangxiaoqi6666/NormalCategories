//
//  settings.h
//  CallRecorder
//
//  Created by upon on 2019/4/29.
//  Copyright © 2019 LiuShuo. All rights reserved.
//

#ifndef settings_h
#define settings_h


#ifdef DEBUG
#define CLog(fmt, ...) NSLog((@"%s [Line: %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#define CLogwt(tag, fmt, ...) NSLog((@"[%@](%d) " fmt), tag, __LINE__, ##__VA_ARGS__)
#else
#define CLog(fmt, ...)
#define CLogwt(tag, fmt, ...)
#endif

#define NameSpacing(name) [NSString stringWithFormat:@"?service=%@", name]

#define ZJYColorHex(hexValue) [UIColor colorWithHexString:hexValue]
#define ZJYColorHexWithAlpha(hexValue,alphaValue) [UIColor colorWithHexString:hexValue withAlpha:alphaValue]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000)>>16))/255.0 green:((float)((rgbValue & 0xFF00)>>8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromARGB(rgbValue,alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000)>>16))/255.0 green:((float)((rgbValue & 0xFF00)>>8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alphaValue]
#define UIColorRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorRGB(r,g,b) UIColorRGBA(r,g,b,1)

#define UIColorWithARGBString(string) \
({ \
NSString *value = [string stringByReplacingOccurrencesOfString:@"#" withString:@""]; \
NSInteger alpha = 255.0; \
int index = 0; \
if (value.length == 8) { \
alpha = strtoul([[value substringWithRange:NSMakeRange(0, 2)] UTF8String], 0, 16); \
index = 2; \
} \
NSInteger red = strtoul([[value substringWithRange:NSMakeRange(index + 0, 2)] UTF8String], 0, 16); \
NSInteger green = strtoul([[value substringWithRange:NSMakeRange(index + 2, 2)] UTF8String], 0, 16); \
NSInteger blue = strtoul([[value substringWithRange:NSMakeRange(index + 4, 2)] UTF8String], 0, 16); \
([UIColor colorWithRed:red/255.0 green:green/255.0 blue:blue/255.0 alpha:alpha/255.0]); \
})


#define RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
#define GlobalFirstBlackColor UIColorFromRGB(0x000000)
#define GlobalSecondBlackColor UIColorFromARGB(0x000000, 138.0/255)
#define GlobalThirdBlackColor UIColorFromARGB(0x000000, 61.0/255)
#define GlobalThemeColor UIColorFromRGB(0x01C6B1)
#define GlobalThemePressedColor UIColorFromRGB(0x59c4b2)
#define GlobalPressedColor UIColorFromRGB(0xf3f4f6)
#define GlobalWhiteColor     UIColorFromRGB(0xffffff)
#define GlobalLineColor UIColorFromRGB(0xa9b2bf)
#define GlobalGrayNewColor UIColorFromRGB(0xA9B2BF)
#define GlobalBlackColor     UIColorFromRGB(0x000000)
//Green
#define GlobalGrayGreenColor   UIColorFromRGB(0xebf4ec)
#define GlobalWhiteGreenColor   UIColorFromRGB(0xf6f9f7)
//Gray
#define GlobalGrayColor      UIColorFromRGB(0x999999)
#define GlobalLightGrayColor UIColorFromRGB(0xebebeb)
#define GlobalWhiteGrayColor UIColorFromRGB(0xcecece)
//Yellow
#define GlobalYellowColor UIColorFromRGB(0xffcc00)
//red
#define GlobalRedColor UIColorFromRGB(0xff3b30)


#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define FACTOR (SCREEN_WIDTH / 375.0)
#define FACTOR_HEIGHT (SCREEN_HEIGHT / 667.0)
#define GE_IPHONE6_WIDTH (SCREEN_WIDTH >= 375)

#define IS_IPHONEX ({\
BOOL iPhoneX = NO;\
if (UIDevice.currentDevice.userInterfaceIdiom != UIUserInterfaceIdiomPhone) {\
(iPhoneX);\
}\
if (@available(iOS 11.0, *)) {\
UIWindow *mainWindow = [[[UIApplication sharedApplication] delegate] window];\
if (mainWindow.safeAreaInsets.bottom > 0.0) {\
iPhoneX = YES;\
}\
}\
(iPhoneX);\
})


#define BOTTOM_SAFE_AREA_HEIGTHT (IS_IPHONEX ? 34 : 0)

#define STATUS_HEIGHT \
({ \
CGFloat height; \
if (IS_IPHONEX) { \
height = 44; \
} else { \
height = 20; \
} \
(height); \
})

#define NAV_BAR_HEIGHT (44)

#define TOP_MARGIN (STATUS_HEIGHT + NAV_BAR_HEIGHT)

#define SEARCH_BAR_HEIGHT \
({ \
CGFloat height; \
if (@available(iOS 11.0, *)) { \
height = 56; \
} else { \
height = 44; \
} \
(height); \
})

#define TAB_BAR_HEIGHT \
({ \
CGFloat height; \
if (IS_IPHONEX) { \
height = 83; \
} else { \
height = 49; \
} \
(height); \
})

#define BOTTOM_SAFE_HEIGHT \
({ \
CGFloat height; \
if (IS_IPHONEX) { \
height = 34; \
} else { \
height = 0; \
} \
(height); \
})


#define SIP_CALL_CONNECTED @"SIP_CALL_CONNECTED"
#define CALL_HANGUP_NOTIFICATION @"CALL_HANGUP_NOTIFICATION"
#define INCOMING_CALL_RECEIVED_NOTIFICATION @"INCOMING_CALL_RECEIVED_NOTIFICATION"
#define INCOMING_CALL_CANCEL_NOTIFICATION @"INCOMING_CALL_CANCEL_NOTIFICATION"
#define CREDIT_VALUE_CHANGE_NOTIFICATION @"CREDIT_VALUE_CHANGE_NOTIFICATION"
#define SMS_EMOJIKEYBOARD_INSERT_NOTIFICATION @"SMS_EMOJIKEYBOARD_INSERT_NOTIFICATION"
#define SMS_EMOJIKEYBOARD_INSERT_CONTENT @"SMS_EMOJIKEYBOARD_INSERT_CONTENT"
#define SMS_EMOJIKEYBOARD_DELETE_NOTIFICATION @"SMS_EMOJIKEYBOARD_DELETE_NOTIFICATION"
#define SMS_CHANGE_INFO @"SMS_CHANGE_INFO"
#define Call_NewDialView_NOTIFICATION @"Call_NewDialView_NOTIFICATION"
#define Tabbar_PURCHASED_CALL_PACKAGE_NONUMBER_NOTIFICATION @"Tabbar_PURCHASED_CALL_PACKAGE_NONUMBER_NOTIFICATION"
#define BLOCK_LISTUPDATE_NOTIFICATION @"BLOCK_LISTUPDATE_NOTIFICATIO"
#define Notification_RecordPlay @"Notification_RecordPlay"
#define Notification_selectCountryResult @"Notification_selectCountryResult"
#define Notification_chooseSuccess @"Notification_chooseSuccess"
#define LoginDataDidChangedSignatureNotification @"LoginDataDidChangedSignatureNotification"
#define LoginDataDidChangedVoiceMailState @"LoginDataDidChangedVoiceMailState"
#define CALL_CALLLOGDB_LOADED_NOTIFICATION @"CALL_CALLLOGDB_LOADED_NOTIFICATION"
#define SMS_LOG_DELETE_NOTIFICATION @"SMS_LOG_DELETE_NOTIFICATION"

//内购项目--订阅
#define SUBSCRIPTION_ONE_LAUNCH @"one.month.subscription.launch" // 首个号码，新增按月订阅
#define SUBSCRIPTION_ONE_WEEK_ID @"call.plus.premium.one.week"
#define SUBSCRIPTION_ONE_WEEK_ID_2 @"call.plus.one.week.subscription"


//内购项目--消耗
#define Product_Deactive_Account @"one.week.deactive"
#define Product_RechooseNumber_Vertify @"change.number.subscription"

#define FIRST_SUBSCRIPTION_ENTER @"FIRST_SUBSCRIPTION_ENTER"
#define FIRST_SUBSCRIPTION_BACK @"FIRST_SUBSCRIPTION_BACK"
#define FIRST_SUBSCRIPTION_RESTORE @"FIRST_SUBSCRIPTION_RESTORE"

#define ShowFirstRateUsShowed @"ShowFirstRateUsShowed"

#define APP_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define BASE_TABBARVC ((TabBarController *)([APP_DELEGATE.window.rootViewController isKindOfClass:[TabBarController class]] ? APP_DELEGATE.window.rootViewController : nil))
#define ROOT_VC (APP_DELEGATE.window.rootViewController)
#define DB_PATH [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"FreeCall.db"]
#define CallPlusKey @"Emoji_JingNCK567"


// 缓存主目录
#define HSCachesDirectory [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"HSCache"]
// 保存文件名
#define HSFileName(url) url.md5String
// 文件的存放路径（caches）
#define HSFileFullpath(url) [HSCachesDirectory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.cp",HSFileName(url)]]

#define SAFE_STRING(str) (str != nil ? str : @"")


#define ETRECORD_RATE 11025.0
#define LastCallNumber @"LastCallNumber"
#define Define_AppLock_Password @"Define_AppLock_Password"


#define IncomingCount @"IncomingCount"

#endif /* settings_h */
