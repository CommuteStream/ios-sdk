//
//  CSCustomBanner.h
//  CommuteStream
//
//  Created by David Rogers on 5/3/14.
//  Copyright (c) 2014 CommuteStream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GADCustomEventBanner.h"
#import "GADCustomEventBannerDelegate.h"
#import "GADBannerView.h"
#import "GADBannerViewDelegate.h"
#import "CSNetworkEngine.h"

@interface CSCustomBanner : NSObject <GADCustomEventBanner, GADBannerViewDelegate, UIGestureRecognizerDelegate> {
    GADBannerView *bannerView_;
}

@property (nonatomic, strong) CSNetworkEngine *csNetworkEngine;
-(void)buildWebView:(NSMutableDictionary*)dict;
+ (NSString *)getIdfa;
+ (NSString *)getMacSha:(NSString *)deviceAddress;
@end