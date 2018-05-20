/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NavigationDelegate, LoginRegisterNavigationDelegate;
@class User, SCStories;

@interface SCDeepLinkManager : NSObject {

	id<NavigationDelegate> _navigationDelegate;
	id<LoginRegisterNavigationDelegate> _loginRegisterNavigationDelegate;
	User* _user;
	SCStories* _stories;

}
+(void)generateAutoFriendDeepLink:(id)arg1 phoneNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)mapURLWithAddress:(id)arg1 openSource:(long long)arg2 ;
+(id)mapURLWithFriend:(id)arg1 openSource:(long long)arg2 viewSource:(long long)arg3 ;
+(id)discoverURLWithPublisher:(id)arg1 editionId:(id)arg2 dSnapId:(id)arg3 ;
+(BOOL)isValidInternalDeepLinkURL:(id)arg1 ;
+(id)linkForUserInsights;
+(id)linkForListManagedBusinessProfiles;
+(void)resolveDeepLinkURL:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(void)clearDeferredDeepLink;
+(void)matchDevice:(id)arg1 pingTimeInMillis:(long long)arg2 preInstall:(BOOL)arg3 userLogin:(BOOL)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
+(void)verifyDeeplinkRequest:(id)arg1 deepLinkURL:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)handleApplicationLoggingForURL:(id)arg1 ;
+(id)_queryStringWithLat:(double)arg1 lng:(double)arg2 zoom:(double)arg3 displayText:(id)arg4 ;
+(id)linkForUserInsightsWithUserId:(id)arg1 ;
+(id)_makeDarkStylization;
+(id)_makeSerengetiLinkWithPageName:(id)arg1 path:(id)arg2 stylization:(id)arg3 parameters:(id)arg4 ;
+(id)_makeSettingsStylization;
+(id)_makeLeaderboardStylization;
+(id)_encodeUrlQueryParam:(id)arg1 ;
+(id)mapURLWithLat:(double)arg1 lng:(double)arg2 zoom:(double)arg3 displayText:(id)arg4 openSource:(long long)arg5 ;
+(id)mapURLWithPoiId:(id)arg1 lat:(double)arg2 lng:(double)arg3 zoom:(double)arg4 displayText:(id)arg5 openSource:(long long)arg6 ;
+(id)mapURLWithoutStateChangeWithOpenSource:(long long)arg1 ;
+(id)linkForActivateBusinessProfile;
+(id)linkForMapGameLeaderboard;
+(id)linkForListBusinessProfileInvitations;
+(id)linkForBusinessStoryMetricsURL:(id)arg1 ;
+(id)discoverHomepageURL;
+(id)discoverURLWithPublisher:(id)arg1 ;
+(id)getDeferredDeepLink;
-(id)getDeepLinkRequest:(id)arg1 ;
-(id)initWithUser:(id)arg1 withStories:(id)arg2 navigationDelegate:(id)arg3 ;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3 fromExternal:(BOOL)arg4 source:(long long)arg5 ;
-(id)initWithUser:(id)arg1 withStories:(id)arg2 navigationDelegate:(id)arg3 loginRegisterNavigationDelegate:(id)arg4 ;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3 fromExternal:(BOOL)arg4 ;
-(id)_deepLinkProcessorForFeature:(id)arg1 ;
-(void)_alertErrorWithTitle:(id)arg1 image:(id)arg2 ;
-(BOOL)isEmptyDeepLinkRequest:(id)arg1 ;
-(BOOL)processDeepLinkResponse:(id)arg1 url:(id)arg2 userSession:(id)arg3 ;
-(BOOL)handleOpenURL:(id)arg1 additionalInfo:(id)arg2 ;
-(BOOL)handleOpenURL:(id)arg1 additionalInfo:(id)arg2 source:(long long)arg3 ;
-(BOOL)processDeepLinkResponse:(id)arg1 url:(id)arg2 ;
@end
