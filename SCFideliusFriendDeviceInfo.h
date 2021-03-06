/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSNumber;

@interface SCFideliusFriendDeviceInfo : NSObject {

	NSString* _theirOutBeta;
	NSString* _userId;
	NSData* _mystique;
	NSNumber* _version;
	NSNumber* _timestamp;

}

@property (nonatomic,copy) NSString * theirOutBeta;              //@synthesize theirOutBeta=_theirOutBeta - In the implementation block
@property (nonatomic,copy) NSString * userId;                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSData * mystique;                    //@synthesize mystique=_mystique - In the implementation block
@property (nonatomic,retain) NSNumber * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithTheirOutBeta:(id)arg1 userId:(id)arg2 mystique:(id)arg3 version:(id)arg4 timestamp:(id)arg5 ;
-(NSString *)theirOutBeta;
-(void)setTheirOutBeta:(NSString *)arg1 ;
-(NSData *)mystique;
-(void)setMystique:(NSData *)arg1 ;
-(id)description;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end

