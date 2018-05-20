/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface SCEvent : NSObject {

	NSString* _eventName;
	NSDictionary* _parameters;
	NSDictionary* _secretParameters;
	NSDictionary* _metrics;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * eventName;                         //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSDictionary * secretParameters;              //@synthesize secretParameters=_secretParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(NSDictionary *)secretParameters;
-(id)initWithName:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4 ;
-(void)setSecretParameters:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(id)dictionary;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
@end

