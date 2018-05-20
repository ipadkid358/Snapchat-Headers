/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUBroadcastPreviewStoryResponse.h>
@class SOJUFriendStories;


@protocol SOJUBroadcastPreviewStoryResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUFriendStories * publicStories; 
@required
-(SOJUFriendStories *)publicStories;

@end


@class SOJUFriendStories, NSString;

@interface SOJUBroadcastPreviewStoryResponse : NSObject <SOJUBroadcastPreviewStoryResponse> {

	SOJUFriendStories* _publicStories;

}

@property (nonatomic,copy,readonly) SOJUFriendStories * publicStories;              //@synthesize publicStories=_publicStories - In the implementation block
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
-(SOJUFriendStories *)publicStories;
-(id)initWithPublicStories:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

