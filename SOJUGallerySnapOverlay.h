/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGallerySnapOverlay.h>
@class SOJUGalleryFilters, SOJUGalleryCaption, SOJUGalleryDrawing, NSArray, NSString, NSNumber, SOJUGalleryEraser, SOJUGalleryMagicTools, SOJUGalleryCropping;


@protocol SOJUGallerySnapOverlay <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUGalleryFilters * filters; 
@property (nonatomic,copy,readonly) SOJUGalleryCaption * caption; 
@property (nonatomic,copy,readonly) SOJUGalleryDrawing * drawing; 
@property (nonatomic,copy,readonly) NSArray * stickers; 
@property (nonatomic,copy,readonly) NSString * lensId; 
@property (nonatomic,copy,readonly) NSNumber * audioDisabled; 
@property (nonatomic,copy,readonly) NSString * snapcraftStyleId; 
@property (nonatomic,copy,readonly) NSArray * snapAttachments; 
@property (nonatomic,copy,readonly) SOJUGalleryEraser * eraser; 
@property (nonatomic,copy,readonly) SOJUGalleryMagicTools * magicTools; 
@property (nonatomic,copy,readonly) NSString * audiofilterStyleId; 
@property (nonatomic,copy,readonly) SOJUGalleryCropping * cropping; 
@property (nonatomic,copy,readonly) NSArray * captions; 
@property (nonatomic,copy,readonly) NSString * craftType; 
@property (nonatomic,copy,readonly) NSString * previewLensId; 
@required
-(NSString *)lensId;
-(NSNumber *)audioDisabled;
-(NSString *)snapcraftStyleId;
-(NSArray *)snapAttachments;
-(SOJUGalleryEraser *)eraser;
-(SOJUGalleryMagicTools *)magicTools;
-(NSString *)audiofilterStyleId;
-(SOJUGalleryCropping *)cropping;
-(NSString *)craftType;
-(NSString *)previewLensId;
-(SOJUGalleryFilters *)filters;
-(SOJUGalleryCaption *)caption;
-(NSArray *)stickers;
-(NSArray *)captions;
-(SOJUGalleryDrawing *)drawing;

@end


@class SOJUGalleryFilters, SOJUGalleryCaption, SOJUGalleryDrawing, NSArray, NSString, NSNumber, SOJUGalleryEraser, SOJUGalleryMagicTools, SOJUGalleryCropping;

@interface SOJUGallerySnapOverlay : NSObject <SOJUGallerySnapOverlay> {

	SOJUGalleryFilters* _filters;
	SOJUGalleryCaption* _caption;
	SOJUGalleryDrawing* _drawing;
	NSArray* _stickers;
	NSString* _lensId;
	NSNumber* _audioDisabled;
	NSString* _snapcraftStyleId;
	NSArray* _snapAttachments;
	SOJUGalleryEraser* _eraser;
	SOJUGalleryMagicTools* _magicTools;
	NSString* _audiofilterStyleId;
	SOJUGalleryCropping* _cropping;
	NSArray* _captions;
	NSString* _craftType;
	NSString* _previewLensId;

}

@property (nonatomic,copy,readonly) SOJUGalleryFilters * filters;                    //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryCaption * caption;                    //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickers;                              //@synthesize stickers=_stickers - In the implementation block
@property (nonatomic,copy,readonly) NSString * lensId;                               //@synthesize lensId=_lensId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioDisabled;                        //@synthesize audioDisabled=_audioDisabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapcraftStyleId;                     //@synthesize snapcraftStyleId=_snapcraftStyleId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapAttachments;                       //@synthesize snapAttachments=_snapAttachments - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryEraser * eraser;                      //@synthesize eraser=_eraser - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryMagicTools * magicTools;              //@synthesize magicTools=_magicTools - In the implementation block
@property (nonatomic,copy,readonly) NSString * audiofilterStyleId;                   //@synthesize audiofilterStyleId=_audiofilterStyleId - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryCropping * cropping;                  //@synthesize cropping=_cropping - In the implementation block
@property (nonatomic,copy,readonly) NSArray * captions;                              //@synthesize captions=_captions - In the implementation block
@property (nonatomic,copy,readonly) NSString * craftType;                            //@synthesize craftType=_craftType - In the implementation block
@property (nonatomic,copy,readonly) NSString * previewLensId;                        //@synthesize previewLensId=_previewLensId - In the implementation block
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
-(NSString *)lensId;
-(BOOL)audioDisabledValue;
-(long long)craftTypeEnum;
-(NSNumber *)audioDisabled;
-(NSString *)snapcraftStyleId;
-(NSArray *)snapAttachments;
-(SOJUGalleryEraser *)eraser;
-(SOJUGalleryMagicTools *)magicTools;
-(NSString *)audiofilterStyleId;
-(SOJUGalleryCropping *)cropping;
-(NSString *)craftType;
-(NSString *)previewLensId;
-(id)initWithFilters:(id)arg1 caption:(id)arg2 drawing:(id)arg3 stickers:(id)arg4 lensId:(id)arg5 audioDisabled:(id)arg6 snapcraftStyleId:(id)arg7 snapAttachments:(id)arg8 eraser:(id)arg9 magicTools:(id)arg10 audiofilterStyleId:(id)arg11 cropping:(id)arg12 captions:(id)arg13 craftType:(id)arg14 previewLensId:(id)arg15 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUGalleryFilters *)filters;
-(SOJUGalleryCaption *)caption;
-(NSArray *)stickers;
-(id)toDictionary;
-(NSArray *)captions;
-(SOJUGalleryDrawing *)drawing;
@end

