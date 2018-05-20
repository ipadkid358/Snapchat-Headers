/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSString, NSNumber;

@interface SOJUGalleryServletTagsInOneSnapBuilder : NSObject {

	NSArray* _locationTagList;
	NSArray* _timeTagList;
	NSArray* _metaTagList;
	NSDictionary* _visualTagToConfidenceMap;
	NSString* _languageId;
	NSString* _tagCluster;
	NSString* _locationCluster;
	NSString* _caption;
	NSNumber* _qualityScore;
	NSNumber* _blurrinessScore;
	NSNumber* _lightingQualityScore;
	NSNumber* _noisinessScore;

}
+(id)withJUGalleryServletTagsInOneSnap:(id)arg1 ;
-(id)setQualityScoreValue:(double)arg1 ;
-(id)setBlurrinessScoreValue:(double)arg1 ;
-(id)setLightingQualityScoreValue:(double)arg1 ;
-(id)setNoisinessScoreValue:(double)arg1 ;
-(id)setLocationTagList:(id)arg1 ;
-(id)setTimeTagList:(id)arg1 ;
-(id)setMetaTagList:(id)arg1 ;
-(id)setVisualTagToConfidenceMap:(id)arg1 ;
-(id)setLanguageId:(id)arg1 ;
-(id)setTagCluster:(id)arg1 ;
-(id)setLocationCluster:(id)arg1 ;
-(id)setBlurrinessScore:(id)arg1 ;
-(id)setLightingQualityScore:(id)arg1 ;
-(id)setNoisinessScore:(id)arg1 ;
-(id)build;
-(id)setCaption:(id)arg1 ;
-(id)setQualityScore:(id)arg1 ;
@end

