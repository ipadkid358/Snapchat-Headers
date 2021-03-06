/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, SCStorySnapMetadata, SCStorySnapMediaContent, SCChatSnapchatter, SCContributionStoryPublisher, SCMapSnapMetadata, SCMapPoiShareMetadata, SCSearchStoryMetadata, NSSet;

@interface SCChatMetadataBuilder : NSObject {

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
+(id)withChatMetadata:(id)arg1 ;
-(id)setSnapchatter:(id)arg1 ;
-(id)setUrlMediaCardContents:(id)arg1 ;
-(id)setAddressMediaCardContents:(id)arg1 ;
-(id)setMediaMetadataDicts:(id)arg1 ;
-(id)setStorySnapMetadata:(id)arg1 ;
-(id)setStorySnapMediaContent:(id)arg1 ;
-(id)setMapSnapMetadata:(id)arg1 ;
-(id)setMapPoiShareMetadata:(id)arg1 ;
-(id)setSearchStoryMetadata:(id)arg1 ;
-(id)setSearchStorySnapMediaDictionary:(id)arg1 ;
-(id)setTappedSnapchatterIds:(id)arg1 ;
-(id)build;
-(id)setPublisher:(id)arg1 ;
@end

