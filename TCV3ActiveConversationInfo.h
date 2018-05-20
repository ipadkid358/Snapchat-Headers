/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3ActiveConversationInfo.h>

@class NSString, NSArray;

@interface TCV3ActiveConversationInfo : NSObject <SCTV3ActiveConversationInfo> {

	BOOL _calling;
	NSString* _caller;
	long long _callMedia;
	NSArray* _callParticipants;
	NSArray* _typingParticipants;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL calling;                              //@synthesize calling=_calling - In the implementation block
@property (nonatomic,readonly) NSString * caller;                         //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) long long callMedia;                       //@synthesize callMedia=_callMedia - In the implementation block
@property (nonatomic,readonly) NSArray * callParticipants;                //@synthesize callParticipants=_callParticipants - In the implementation block
@property (nonatomic,readonly) NSArray * typingParticipants;              //@synthesize typingParticipants=_typingParticipants - In the implementation block
+(id)ActiveConversationInfoWithCalling:(BOOL)arg1 caller:(id)arg2 callMedia:(long long)arg3 callParticipants:(id)arg4 typingParticipants:(id)arg5 ;
-(id)initWithCalling:(BOOL)arg1 caller:(id)arg2 callMedia:(long long)arg3 callParticipants:(id)arg4 typingParticipants:(id)arg5 ;
-(BOOL)calling;
-(long long)callMedia;
-(NSArray *)callParticipants;
-(NSArray *)typingParticipants;
-(BOOL)isCalling;
-(NSString *)description;
-(NSString *)caller;
@end
