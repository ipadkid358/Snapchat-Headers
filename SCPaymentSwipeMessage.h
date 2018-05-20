/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface SCPaymentSwipeMessage : NSObject {

	NSDate* _groupCreationTimestamp;
	NSString* _sender;
	NSString* _recipient;
	unsigned long long _count;

}

@property (nonatomic,retain) NSDate * groupCreationTimestamp;              //@synthesize groupCreationTimestamp=_groupCreationTimestamp - In the implementation block
@property (nonatomic,copy) NSString * sender;                              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * recipient;                           //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) unsigned long long count;                     //@synthesize count=_count - In the implementation block
-(id)initWithPreviousSwipe:(id)arg1 ;
-(id)initFirstSwipeWithSender:(id)arg1 recipient:(id)arg2 ;
-(void)setGroupCreationTimestamp:(NSDate *)arg1 ;
-(NSDate *)groupCreationTimestamp;
-(id)chatMessageWithParametersDelegate:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)sender;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)recipient;
-(void)setRecipient:(NSString *)arg1 ;
@end
