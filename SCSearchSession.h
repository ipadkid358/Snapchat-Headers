/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCUserSession, SCSearchFriendProvider, SCSearchFriendsDataProvider, SCSearchStoriesPresenter, SCSearchDiscoverStoriesPresenter, SCMomentsOperaPresenter;

@interface SCSearchSession : NSObject {

	NSString* _sessionId;
	SCUserSession* _userSession;
	long long _launchSource;
	long long _entryPoint;
	SCSearchFriendProvider* _friendProvider;
	SCSearchFriendsDataProvider* _friendsDataProvider;
	SCSearchStoriesPresenter* _storiesPresenter;
	SCSearchDiscoverStoriesPresenter* _discoverStoriesPresenter;
	SCMomentsOperaPresenter* _momentsOperaPresenter;

}

@property (nonatomic,copy,readonly) NSString * sessionId;                                                //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) SCUserSession * userSession;                                              //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) long long launchSource;                                                   //@synthesize launchSource=_launchSource - In the implementation block
@property (nonatomic,readonly) long long entryPoint;                                                     //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) SCSearchFriendProvider * friendProvider;                                  //@synthesize friendProvider=_friendProvider - In the implementation block
@property (nonatomic,readonly) SCSearchFriendsDataProvider * friendsDataProvider;                        //@synthesize friendsDataProvider=_friendsDataProvider - In the implementation block
@property (nonatomic,readonly) SCSearchStoriesPresenter * storiesPresenter;                              //@synthesize storiesPresenter=_storiesPresenter - In the implementation block
@property (nonatomic,readonly) SCSearchDiscoverStoriesPresenter * discoverStoriesPresenter;              //@synthesize discoverStoriesPresenter=_discoverStoriesPresenter - In the implementation block
@property (nonatomic,readonly) SCMomentsOperaPresenter * momentsOperaPresenter;                          //@synthesize momentsOperaPresenter=_momentsOperaPresenter - In the implementation block
-(SCSearchFriendProvider *)friendProvider;
-(SCSearchFriendsDataProvider *)friendsDataProvider;
-(id)initWithUserSession:(id)arg1 launchSource:(long long)arg2 pageType:(unsigned long long)arg3 ;
-(id)initWithUserSession:(id)arg1 launchSource:(long long)arg2 ;
-(SCSearchStoriesPresenter *)storiesPresenter;
-(id)presentingStoryId;
-(SCSearchDiscoverStoriesPresenter *)discoverStoriesPresenter;
-(SCMomentsOperaPresenter *)momentsOperaPresenter;
-(NSString *)sessionId;
-(SCUserSession *)userSession;
-(long long)entryPoint;
-(long long)launchSource;
-(id)debugInfo;
@end
