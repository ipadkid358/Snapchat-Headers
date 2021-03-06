/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatGroupUpdateContent.h>
@class NSString, NSArray;


@protocol SCChatGroupUpdateContent <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * modifiedBy; 
@property (nonatomic,copy,readonly) NSString * groupName; 
@property (nonatomic,copy,readonly) NSArray * modifiedParticipants; 
@property (nonatomic,readonly) long long type; 
@required
-(NSArray *)modifiedParticipants;
-(long long)type;
-(NSString *)groupName;
-(NSString *)modifiedBy;

@end


@class NSString, NSArray;

@interface SCChatGroupUpdateContent : NSObject <SCChatGroupUpdateContent> {

	NSString* _modifiedBy;
	NSString* _groupName;
	NSArray* _modifiedParticipants;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * modifiedBy;                       //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedParticipants;              //@synthesize modifiedParticipants=_modifiedParticipants - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSArray *)modifiedParticipants;
-(id)initWithModifiedBy:(id)arg1 groupName:(id)arg2 modifiedParticipants:(id)arg3 type:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupName;
-(NSString *)modifiedBy;
@end

