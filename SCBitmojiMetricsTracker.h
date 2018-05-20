/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SCBitmojiMetricsTracker : NSObject <NSMutableCopying> {

	unsigned long long _state;
	unsigned long long _fetchType;
	long long _feature;
	double _stateEntry[5];
	unsigned long long _decompressionType;
	double _decompressionInterval;

}

@property (nonatomic,readonly) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long feature;                                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchType;                      //@synthesize fetchType=_fetchType - In the implementation block
@property (nonatomic,readonly) unsigned long long decompressionType;              //@synthesize decompressionType=_decompressionType - In the implementation block
-(BOOL)hasFetchTimeInterval;
-(double)fetchTimeInterval;
-(BOOL)hasQueueTimeInterval;
-(double)queueTimeInterval;
-(BOOL)hasDecompressionTimeInterval;
-(double)decompressionTimeInterval;
-(unsigned long long)decompressionType;
-(id)description;
-(unsigned long long)state;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)feature;
-(unsigned long long)fetchType;
@end
