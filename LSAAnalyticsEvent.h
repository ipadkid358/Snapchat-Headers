/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LSAAnalyticsEvent : NSObject {

	NSString* _interactionName;
	NSString* _interactionValue;
	long long _sessionTotalCount;
	long long _actionSequenceCount;
	unsigned long long _cameraType;

}

@property (nonatomic,copy,readonly) NSString * interactionName;               //@synthesize interactionName=_interactionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * interactionValue;              //@synthesize interactionValue=_interactionValue - In the implementation block
@property (nonatomic,readonly) long long sessionTotalCount;                   //@synthesize sessionTotalCount=_sessionTotalCount - In the implementation block
@property (nonatomic,readonly) long long actionSequenceCount;                 //@synthesize actionSequenceCount=_actionSequenceCount - In the implementation block
@property (nonatomic,readonly) unsigned long long cameraType;                 //@synthesize cameraType=_cameraType - In the implementation block
-(id)initWithInteractionName:(id)arg1 interactionValue:(id)arg2 sessionTotalCount:(long long)arg3 actionSequenceCount:(long long)arg4 cameraType:(unsigned long long)arg5 ;
-(NSString *)interactionName;
-(NSString *)interactionValue;
-(long long)sessionTotalCount;
-(long long)actionSequenceCount;
-(id)description;
-(unsigned long long)cameraType;
@end

