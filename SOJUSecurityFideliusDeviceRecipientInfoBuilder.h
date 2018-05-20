/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SOJUSecurityFideliusDeviceRecipientInfoBuilder : NSObject {

	NSString* _senderOutDelta;
	NSString* _senderOutDeltaCheck;
	NSNumber* _counter;
	NSString* _na;
	NSString* _phi;
	NSString* _tag;
	NSString* _recipientOutDelta;
	NSString* _recipientOutDeltaCheck;
	NSString* _senderUserId;
	NSString* _recipientUserId;
	NSNumber* _recipientVersion;

}
+(id)withJUSecurityFideliusDeviceRecipientInfo:(id)arg1 ;
-(id)setCounterValue:(int)arg1 ;
-(id)setRecipientVersionValue:(int)arg1 ;
-(id)setSenderOutDelta:(id)arg1 ;
-(id)setSenderOutDeltaCheck:(id)arg1 ;
-(id)setNa:(id)arg1 ;
-(id)setPhi:(id)arg1 ;
-(id)setRecipientOutDelta:(id)arg1 ;
-(id)setRecipientOutDeltaCheck:(id)arg1 ;
-(id)setSenderUserId:(id)arg1 ;
-(id)setRecipientUserId:(id)arg1 ;
-(id)setRecipientVersion:(id)arg1 ;
-(id)setTag:(id)arg1 ;
-(id)build;
-(id)setCounter:(id)arg1 ;
@end

