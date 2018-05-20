/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLShapeCollection.h>
#import <Snapchat/MGLFeature.h>

@class NSDictionary, NSArray, NSString;

@interface MGLShapeCollectionFeature : MGLShapeCollection <MGLFeature> {

	id identifier;
	NSDictionary* attributes;

}

@property (nonatomic,copy,readonly) NSArray * shapes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy) id identifier; 
@property (nonatomic,copy) NSDictionary * attributes; 
+(id)shapeCollectionWithShapes:(id)arg1 ;
-(variant<mapbox::geometry::geometry<double>, mapbox::geometry::feature<double>, mapbox::geometry::feature_collection<double, std::vector> >)geoJSONObject;
-(id)geoJSONDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)attributeForKey:(id)arg1 ;
@end

