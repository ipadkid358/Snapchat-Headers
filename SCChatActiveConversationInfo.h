/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface SCChatActiveConversationInfo : NSObject <NSCopying, NSCoding> {

	BOOL _isCalling;
	NSString* _caller;
	unsigned long long _callMedia;
	NSArray* _callParticipants;
	NSArray* _typingParticipants;

}

@property (nonatomic,readonly) BOOL isCalling;                                 //@synthesize isCalling=_isCalling - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                         //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) unsigned long long callMedia;                   //@synthesize callMedia=_callMedia - In the implementation block
@property (nonatomic,copy,readonly) NSArray * callParticipants;                //@synthesize callParticipants=_callParticipants - In the implementation block
@property (nonatomic,copy,readonly) NSArray * typingParticipants;              //@synthesize typingParticipants=_typingParticipants - In the implementation block
-(unsigned long long)callMedia;
-(NSArray *)callParticipants;
-(NSArray *)typingParticipants;
-(BOOL)isCalling;
-(id)initWithIsCalling:(BOOL)arg1 caller:(id)arg2 callMedia:(unsigned long long)arg3 callParticipants:(id)arg4 typingParticipants:(id)arg5 ;
-(id)initWithTV3ActiveConversationInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)caller;
@end

