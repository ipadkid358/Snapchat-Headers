/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface SCFideliusSEKData : NSObject {

	NSNumber* _snapId;
	NSString* _snapKey;
	NSNumber* _timestamp;

}

@property (nonatomic,readonly) NSNumber * snapId;                 //@synthesize snapId=_snapId - In the implementation block
@property (nonatomic,readonly) NSString * snapKey;                //@synthesize snapKey=_snapKey - In the implementation block
@property (nonatomic,readonly) NSNumber * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(NSNumber *)snapId;
-(NSString *)snapKey;
-(id)initWithSnapId:(id)arg1 key:(id)arg2 timestamp:(id)arg3 ;
-(NSNumber *)timestamp;
@end

