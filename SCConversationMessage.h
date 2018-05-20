/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SCConversationMessageContent;

@interface SCConversationMessage : SCDocObject <NSCopying> {

	NSString* _consistentId;
	NSString* _conversationId;
	NSString* _messageSender;
	double _messageTimestampInEpochSecs;
	double _sentTimestampInEpochSecs;
	long long _type;
	NSArray* _knownSequences;
	SCConversationMessageContent* _content;

}

@property (nonatomic,copy,readonly) NSString * consistentId;                             //@synthesize consistentId=_consistentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationId;                           //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageSender;                            //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,readonly) double messageTimestampInEpochSecs;                       //@synthesize messageTimestampInEpochSecs=_messageTimestampInEpochSecs - In the implementation block
@property (nonatomic,readonly) double sentTimestampInEpochSecs;                          //@synthesize sentTimestampInEpochSecs=_sentTimestampInEpochSecs - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownSequences;                            //@synthesize knownSequences=_knownSequences - In the implementation block
@property (nonatomic,copy,readonly) SCConversationMessageContent * content;              //@synthesize content=_content - In the implementation block
+(id)immutableObjectParse:(const void*)arg1 ;
+(SCDocObjectClassFunctionPointer*)objectClassFunctionPointer;
+(const char*)table;
-(id)initWithConsistentId:(id)arg1 conversationId:(id)arg2 messageSender:(id)arg3 messageTimestampInEpochSecs:(double)arg4 sentTimestampInEpochSecs:(double)arg5 type:(long long)arg6 knownSequences:(id)arg7 content:(id)arg8 ;
-(NSString *)consistentId;
-(double)messageTimestampInEpochSecs;
-(double)sentTimestampInEpochSecs;
-(NSArray *)knownSequences;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCConversationMessageContent *)content;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversationId;
-(NSString *)messageSender;
@end
