//
//  DOT.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 18..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <Foundation/Foundation.h>

#import "Purchase.h"
#import "Conversion.h"
#import "Page.h"
#import "Click.h"
#import "User.h"
#import "Referrer.h"
#import "KeyConstant.h"
#import "NSObject+Builder.h"
#import "DOTUtil.h"
#import "Push.h"

//! Project version number for DOT.
FOUNDATION_EXPORT double DOTVersionNumber;

//! Project version string for DOT.
FOUNDATION_EXPORT const unsigned char DOTVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DOT/PublicHeader.h>

@interface DOT : NSObject
@property (class) KeyConstant *Key;

//SDK init함수
+ (void)initialization;

//native 사용함수
+ (void)setUser:(User *)user;
+ (void)setUserLogout;
+ (void)setDeepLink:(NSString *)deepLink;
+ (void)setInstallReferrer:(Referrer *)refferer;
+ (void)setPurchase:(Purchase *)purchase;
+ (void)setConversion:(Conversion *)conversion;
+ (void)setPage:(Page *)page;
+ (void)setClick:(Click *)click;
+ (void)onStartPage;
+ (void)onStopPage;
+ (void)enterForeground;
+ (void)enterBackground;
+ (void)setPushId:(NSString *)pushId;
+ (void)setPushToken:(NSString *)deviceToken;
+ (void)setPushClick:(NSDictionary *)userInfo;

//facebook Referrer체크
+ (void)setFacebookReferrer:(NSString *)fbReferrer;
+ (void)setFacebookreferrerData:(NSURL *)fbURL;

//서버전송 함수
+ (void)sendTransaction;
+ (void)sendTransactionByPage;

//webview, wkWebView 사용함수
+ (void)setWebView:(UIWebView *)webView reqeust:(NSURLRequest *)request;
+ (void)setWkWebView:(WKWebView *)wkWebView reqeust:(NSURLRequest *)request;
+ (void)onStartWebPage;
+ (void)onStopWebPage;
+ (void)setPairingData:(UIWebView *)webView;
+ (void)setPairingDataInWkWebView:(WKWebView *)webView;
+ (void)setPairingDataWithCookie:(NSArray *)cookies;

@end



