/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSendTaskMetadataContainer.h>
#import <Snapchat/SOJUNycShare.h>
@class NSString;


@protocol SOJUNycShare <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * storyId; 
@property (nonatomic,copy,readonly) NSString * mediaType; 
@property (nonatomic,copy,readonly) NSString * poiId; 
@required
-(NSString *)storyId;
-(NSString *)poiId;
-(NSString *)mediaType;

@end


@class NSString;

@interface SOJUNycShare : NSObject <SCSendTaskMetadataContainer, SOJUNycShare> {

	NSString* _storyId;
	NSString* _mediaType;
	NSString* _poiId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * storyId;                //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * poiId;                  //@synthesize poiId=_poiId - In the implementation block
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSString *)storyId;
-(NSString *)poiId;
-(id)initWithStoryId:(id)arg1 mediaType:(id)arg2 poiId:(id)arg3 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)sendTaskMetadata;
-(unsigned long long)sendTaskType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)mediaType;
@end

