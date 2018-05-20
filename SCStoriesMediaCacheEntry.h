/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRequest;

@interface SCStoriesMediaCacheEntry : NSObject {

	BOOL _userInitiated;
	SCRequest* _request;
	long long _mediaState;

}

@property (nonatomic,retain) SCRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long mediaState;              //@synthesize mediaState=_mediaState - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                //@synthesize userInitiated=_userInitiated - In the implementation block
-(id)initWithRequest:(id)arg1 userInitiated:(BOOL)arg2 mediaState:(long long)arg3 ;
-(long long)mediaState;
-(void)setMediaState:(long long)arg1 ;
-(SCRequest *)request;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(void)setRequest:(SCRequest *)arg1 ;
@end
