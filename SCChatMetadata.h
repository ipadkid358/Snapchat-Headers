/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMetadata.h>
@class NSDictionary, SCStorySnapMetadata, SCStorySnapMediaContent, SCChatSnapchatter, SCContributionStoryPublisher, SCMapSnapMetadata, SCMapPoiShareMetadata, SCSearchStoryMetadata, NSSet;


@protocol SCChatMetadata <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * urlMediaCardContents; 
@property (nonatomic,copy,readonly) NSDictionary * addressMediaCardContents; 
@property (nonatomic,copy,readonly) NSDictionary * mediaMetadataDicts; 
@property (nonatomic,copy,readonly) SCStorySnapMetadata * storySnapMetadata; 
@property (nonatomic,copy,readonly) SCStorySnapMediaContent * storySnapMediaContent; 
@property (nonatomic,copy,readonly) SCChatSnapchatter * snapchatter; 
@property (nonatomic,copy,readonly) SCContributionStoryPublisher * publisher; 
@property (nonatomic,copy,readonly) SCMapSnapMetadata * mapSnapMetadata; 
@property (nonatomic,copy,readonly) SCMapPoiShareMetadata * mapPoiShareMetadata; 
@property (nonatomic,copy,readonly) SCSearchStoryMetadata * searchStoryMetadata; 
@property (nonatomic,copy,readonly) NSDictionary * searchStorySnapMediaDictionary; 
@property (nonatomic,copy,readonly) NSSet * tappedSnapchatterIds; 
@required
-(SCChatSnapchatter *)snapchatter;
-(SCStorySnapMediaContent *)storySnapMediaContent;
-(NSDictionary *)urlMediaCardContents;
-(NSDictionary *)addressMediaCardContents;
-(NSDictionary *)mediaMetadataDicts;
-(SCStorySnapMetadata *)storySnapMetadata;
-(SCMapSnapMetadata *)mapSnapMetadata;
-(SCMapPoiShareMetadata *)mapPoiShareMetadata;
-(SCSearchStoryMetadata *)searchStoryMetadata;
-(NSDictionary *)searchStorySnapMediaDictionary;
-(NSSet *)tappedSnapchatterIds;
-(SCContributionStoryPublisher *)publisher;

@end


@class NSDictionary, SCStorySnapMetadata, SCStorySnapMediaContent, SCChatSnapchatter, SCContributionStoryPublisher, SCMapSnapMetadata, SCMapPoiShareMetadata, SCSearchStoryMetadata, NSSet, NSString;

@interface SCChatMetadata : NSObject <SCChatMetadata> {

	NSDictionary* _urlMediaCardContents;
	NSDictionary* _addressMediaCardContents;
	NSDictionary* _mediaMetadataDicts;
	SCStorySnapMetadata* _storySnapMetadata;
	SCStorySnapMediaContent* _storySnapMediaContent;
	SCChatSnapchatter* _snapchatter;
	SCContributionStoryPublisher* _publisher;
	SCMapSnapMetadata* _mapSnapMetadata;
	SCMapPoiShareMetadata* _mapPoiShareMetadata;
	SCSearchStoryMetadata* _searchStoryMetadata;
	NSDictionary* _searchStorySnapMediaDictionary;
	NSSet* _tappedSnapchatterIds;

}

@property (nonatomic,copy,readonly) NSDictionary * urlMediaCardContents;                          //@synthesize urlMediaCardContents=_urlMediaCardContents - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * addressMediaCardContents;                      //@synthesize addressMediaCardContents=_addressMediaCardContents - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * mediaMetadataDicts;                            //@synthesize mediaMetadataDicts=_mediaMetadataDicts - In the implementation block
@property (nonatomic,copy,readonly) SCStorySnapMetadata * storySnapMetadata;                      //@synthesize storySnapMetadata=_storySnapMetadata - In the implementation block
@property (nonatomic,copy,readonly) SCStorySnapMediaContent * storySnapMediaContent;              //@synthesize storySnapMediaContent=_storySnapMediaContent - In the implementation block
@property (nonatomic,copy,readonly) SCChatSnapchatter * snapchatter;                              //@synthesize snapchatter=_snapchatter - In the implementation block
@property (nonatomic,copy,readonly) SCContributionStoryPublisher * publisher;                     //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy,readonly) SCMapSnapMetadata * mapSnapMetadata;                          //@synthesize mapSnapMetadata=_mapSnapMetadata - In the implementation block
@property (nonatomic,copy,readonly) SCMapPoiShareMetadata * mapPoiShareMetadata;                  //@synthesize mapPoiShareMetadata=_mapPoiShareMetadata - In the implementation block
@property (nonatomic,copy,readonly) SCSearchStoryMetadata * searchStoryMetadata;                  //@synthesize searchStoryMetadata=_searchStoryMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * searchStorySnapMediaDictionary;                //@synthesize searchStorySnapMediaDictionary=_searchStorySnapMediaDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tappedSnapchatterIds;                                 //@synthesize tappedSnapchatterIds=_tappedSnapchatterIds - In the implementation block
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
-(SCChatSnapchatter *)snapchatter;
-(id)initWithUrlMediaCardContents:(id)arg1 addressMediaCardContents:(id)arg2 mediaMetadataDicts:(id)arg3 storySnapMetadata:(id)arg4 storySnapMediaContent:(id)arg5 snapchatter:(id)arg6 publisher:(id)arg7 mapSnapMetadata:(id)arg8 mapPoiShareMetadata:(id)arg9 searchStoryMetadata:(id)arg10 searchStorySnapMediaDictionary:(id)arg11 tappedSnapchatterIds:(id)arg12 ;
-(id)allCacheIds;
-(SCStorySnapMediaContent *)storySnapMediaContent;
-(NSDictionary *)urlMediaCardContents;
-(NSDictionary *)addressMediaCardContents;
-(NSDictionary *)mediaMetadataDicts;
-(SCStorySnapMetadata *)storySnapMetadata;
-(SCMapSnapMetadata *)mapSnapMetadata;
-(SCMapPoiShareMetadata *)mapPoiShareMetadata;
-(SCSearchStoryMetadata *)searchStoryMetadata;
-(NSDictionary *)searchStorySnapMediaDictionary;
-(NSSet *)tappedSnapchatterIds;
-(id)_storySnapContentCacheIds;
-(id)_mediaCardThumbnailCacheIds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCContributionStoryPublisher *)publisher;
@end

