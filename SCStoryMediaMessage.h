/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBatchedMediaMessage.h>

@class NSString;

@interface SCStoryMediaMessage : SCBatchedMediaMessage {

	NSString* _title;
	long long _animatedSnapType;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long animatedSnapType;              //@synthesize animatedSnapType=_animatedSnapType - In the implementation block
+(id)dateRangeTitleWithDates:(id)arg1 ;
-(long long)animatedSnapType;
-(id)sendJSON;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(void)fetchMediaUserInitiated:(BOOL)arg1 ;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 ;
-(long long)scaMessageType;
-(id)logEventName;
-(BOOL)isVideoLaguna;
-(BOOL)isPsychomantis;
-(void)prefetchMedia;
-(id)httpSenderParameters;
-(void)fetchMediaFromIndex:(unsigned long long)arg1 number:(unsigned long long)arg2 shouldRetry:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchMinimumRequiredMedia;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)messageType;
@end

