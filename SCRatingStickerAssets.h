/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString, NSNumber, SOJUGeofilterLayoutParameters;

@interface SCRatingStickerAssets : NSObject {

	UIImage* _selectedStateAsset;
	UIImage* _unselectedStateAsset;
	NSString* _resourceId;
	NSNumber* _initialRating;
	SOJUGeofilterLayoutParameters* _geofilterLayoutParameters;

}

@property (nonatomic,retain) UIImage * selectedStateAsset;                                           //@synthesize selectedStateAsset=_selectedStateAsset - In the implementation block
@property (nonatomic,retain) UIImage * unselectedStateAsset;                                         //@synthesize unselectedStateAsset=_unselectedStateAsset - In the implementation block
@property (nonatomic,retain) NSString * resourceId;                                                  //@synthesize resourceId=_resourceId - In the implementation block
@property (nonatomic,retain) NSNumber * initialRating;                                               //@synthesize initialRating=_initialRating - In the implementation block
@property (nonatomic,retain) SOJUGeofilterLayoutParameters * geofilterLayoutParameters;              //@synthesize geofilterLayoutParameters=_geofilterLayoutParameters - In the implementation block
-(NSString *)resourceId;
-(void)setResourceId:(NSString *)arg1 ;
-(UIImage *)unselectedStateAsset;
-(UIImage *)selectedStateAsset;
-(NSNumber *)initialRating;
-(id)initWithSelectedStatedAsset:(id)arg1 unselectedStateAsset:(id)arg2 resourceId:(id)arg3 initialRating:(id)arg4 geofilterLayoutParameters:(id)arg5 ;
-(void)setSelectedStatedAsset:(id)arg1 ;
-(void)setUnselectedStatedAsset:(id)arg1 ;
-(void)setSelectedStateAsset:(UIImage *)arg1 ;
-(void)setUnselectedStateAsset:(UIImage *)arg1 ;
-(SOJUGeofilterLayoutParameters *)geofilterLayoutParameters;
-(void)setGeofilterLayoutParameters:(SOJUGeofilterLayoutParameters *)arg1 ;
-(void)setInitialRating:(NSNumber *)arg1 ;
@end

