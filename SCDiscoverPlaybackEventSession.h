/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SCDiscoverPlaybackEventSession : NSObject {

	BOOL _itemLoaded;
	NSDate* _startTime;
	long long _itemLoadState;

}

@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long itemLoadState;              //@synthesize itemLoadState=_itemLoadState - In the implementation block
@property (assign,nonatomic) BOOL itemLoaded;                      //@synthesize itemLoaded=_itemLoaded - In the implementation block
-(void)setItemLoaded:(BOOL)arg1 ;
-(void)setItemLoadState:(long long)arg1 ;
-(BOOL)itemLoaded;
-(long long)itemLoadState;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
@end

