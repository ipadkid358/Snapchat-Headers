/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUMyVerifiedCollabStories.h>
@class NSString, NSArray;


@protocol SOJUMyVerifiedCollabStories <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSArray * stories; 
@property (nonatomic,copy,readonly) NSArray * collabStories; 
@required
-(NSArray *)stories;
-(NSArray *)collabStories;
-(NSString *)displayName;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString, NSArray;

@interface SOJUMyVerifiedCollabStories : NSObject <SOJUMyVerifiedCollabStories> {

	NSString* _username;
	NSString* _userId;
	NSString* _displayName;
	NSArray* _stories;
	NSArray* _collabStories;

}

@property (nonatomic,copy,readonly) NSString * username;                  //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stories;                    //@synthesize stories=_stories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * collabStories;              //@synthesize collabStories=_collabStories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSArray *)stories;
-(NSArray *)collabStories;
-(id)initWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 stories:(id)arg4 collabStories:(id)arg5 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end
