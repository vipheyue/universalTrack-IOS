//
//  Config.h
//  BathroomShopping
//
//  Created by zzy on 7/2/16.
//  Copyright © 2016 zzy. All rights reserved.
//
#ifndef Config_h
#define Config_h

#ifdef DEBUG
//打印日志
#define DLog(format, ...) NSLog(format,##__VA_ARGS__)

#else

#define DLog(format, ...)

#endif

#define CustomColor(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha: 1.0]
#define NavgationBarColor [UIColor colorWithHexString:@"#2dbaa6"]
#define kSeparatorLineColor [UIColor colorWithHexString:@"#ebebeb"]
#define randomColor [UIColor colorWithRed:arc4random_uniform(255)/255.0 green:arc4random_uniform(255)/255.0 blue:arc4random_uniform(255)/255.0 alpha:1]

#define ScreenW [UIScreen mainScreen].bounds.size.width
#define ScreenH [UIScreen mainScreen].bounds.size.height
#define BSNotificationCenter [NSNotificationCenter defaultCenter]
#define kAppDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])

#define kAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#define kIsIPhoneX ((ScreenW == 375) && (ScreenH == 812))
#define kIPhoneXBottomAddtion (kIsIPhoneX ? 34 : 0)
#define kStatusBarHeight (kIsIPhoneX ? 44.0f : 20.0f)
#define kNavigationBarHeight 44.0f
#define kNavigationPlusStatusHeight (kStatusBarHeight + kNavigationBarHeight)

#define TraceAK @"Fy4v266qqF9pm96HLFP5N65GxSkidiAV"
#define TraceMcode @"com.zzy.childtrack"
#define TraceServiceID 153638

#endif /* Config_h */



