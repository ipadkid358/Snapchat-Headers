/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDeepLinkProcessor.h>

@protocol NavigationDelegate;
@class NSString;

@interface SCBitmojiDeepLinkProcessor : NSObject <SCDeepLinkProcessor> {

	id<NavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBitmojiKeyboardEnabled;
+(void)goToBitmojiAppWith:(id)arg1 page:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)goToBitmojiAppStorePageWithCompletion:(/*^block*/id)arg1 ;
+(unsigned long long)getDeepLinkAction:(id)arg1 ;
+(BOOL)isBitmojiInstalled;
+(id)getToBitmojiDeepLinkURLWithSource:(id)arg1 signedToken:(id)arg2 ;
+(void)_openURL:(id)arg1 source:(id)arg2 page:(unsigned long long)arg3 universalLinksOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
+(id)_getBitmojiAppStoreURL;
+(id)imojiURIWithURL:(id)arg1 ;
-(id)initWithNavigationDelegate:(id)arg1 ;
-(void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3 ;
-(BOOL)needsNavigationDelegate;
@end

