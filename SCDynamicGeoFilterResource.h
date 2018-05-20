/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCDynamicGeofilterRenderable.h>

@class NSString;

@interface SCDynamicGeoFilterResource : NSObject <NSCoding, SCDynamicGeofilterRenderable> {

	NSString* _resourceId;
	double _rotation;
	NSString* _source;
	long long _dynamicContextSource;
	NSString* _type;
	double _minRefreshInterval;
	CGRect _layout;

}

@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * resourceId;                    //@synthesize resourceId=_resourceId - In the implementation block
@property (assign,nonatomic) CGRect layout;                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) double rotation;                        //@synthesize rotation=_rotation - In the implementation block
@property (assign) long long dynamicContextSource;                   //@synthesize dynamicContextSource=_dynamicContextSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double minRefreshInterval;              //@synthesize minRefreshInterval=_minRefreshInterval - In the implementation block
+(id)resourceWithDictionary:(id)arg1 ;
-(NSString *)resourceId;
-(void)setResourceId:(NSString *)arg1 ;
-(double)minRefreshInterval;
-(void)getUIImagesWithCanvasSize:(CGSize)arg1 completion:(/*^block*/id)arg2 contextData:(id)arg3 dynamicContextProperties:(id)arg4 ;
-(long long)dynamicContextSource;
-(id)renderCacheComponentKeyWithContextData:(id)arg1 dynamicContextProperties:(id)arg2 ;
-(id)hashableValuesFromDisplayParameters;
-(id)initWithlayout:(CGRect)arg1 source:(id)arg2 resourceId:(id)arg3 rotation:(double)arg4 minRefreshInterval:(double)arg5 type:(id)arg6 ;
-(void)setDynamicContextSource:(long long)arg1 ;
-(void)setMinRefreshInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)type;
-(void)setSource:(NSString *)arg1 ;
-(CGRect)layout;
-(void)setLayout:(CGRect)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(NSString *)source;
@end

