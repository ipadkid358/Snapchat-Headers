/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapSnapMetadata.h>
@class NSString;


@protocol SCMapSnapMetadata <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) long long viewableStatus; 
@property (nonatomic,copy,readonly) NSString * storySnapId; 
@property (nonatomic,copy,readonly) NSString * displayText; 
@property (nonatomic,readonly) double lat; 
@property (nonatomic,readonly) double lng; 
@property (nonatomic,readonly) double zoom; 
@required
-(NSString *)storySnapId;
-(long long)viewableStatus;
-(double)zoom;
-(NSString *)displayText;
-(double)lat;
-(double)lng;

@end


@class NSString;

@interface SCMapSnapMetadata : NSObject <SCMapSnapMetadata> {

	long long _viewableStatus;
	NSString* _storySnapId;
	NSString* _displayText;
	double _lat;
	double _lng;
	double _zoom;

}

@property (nonatomic,readonly) long long viewableStatus;                 //@synthesize viewableStatus=_viewableStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * storySnapId;              //@synthesize storySnapId=_storySnapId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;              //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,readonly) double lat;                               //@synthesize lat=_lat - In the implementation block
@property (nonatomic,readonly) double lng;                               //@synthesize lng=_lng - In the implementation block
@property (nonatomic,readonly) double zoom;                              //@synthesize zoom=_zoom - In the implementation block
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
-(void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)storySnapId;
-(long long)viewableStatus;
-(id)initWithViewableStatus:(long long)arg1 storySnapId:(id)arg2 displayText:(id)arg3 lat:(double)arg4 lng:(double)arg5 zoom:(double)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoom;
-(NSString *)displayText;
-(double)lat;
-(double)lng;
@end

