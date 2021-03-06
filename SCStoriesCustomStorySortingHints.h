/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCStoriesCustomStorySortingHints : NSObject <NSCopying> {

	BOOL _isFirstDegreeFriend;
	double _mostRecentPostTimestamp;

}

@property (nonatomic,readonly) BOOL isFirstDegreeFriend;                    //@synthesize isFirstDegreeFriend=_isFirstDegreeFriend - In the implementation block
@property (nonatomic,readonly) double mostRecentPostTimestamp;              //@synthesize mostRecentPostTimestamp=_mostRecentPostTimestamp - In the implementation block
-(id)initWithIsFirstDegreeFriend:(BOOL)arg1 mostRecentPostTimestamp:(double)arg2 ;
-(BOOL)isFirstDegreeFriend;
-(double)mostRecentPostTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

