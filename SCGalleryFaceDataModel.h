/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryFaceDataModel.h>
@class NSString, NSNumber, SCGalleryBoundingBoxDataModel, NSArray, NSData;


@protocol SCGalleryFaceDataModel <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * gallerySnapId; 
@property (nonatomic,copy,readonly) NSString * faceId; 
@property (nonatomic,copy,readonly) NSString * gallerySnapMediaId; 
@property (nonatomic,copy,readonly) NSNumber * mediaTimeMs; 
@property (nonatomic,readonly) long long mediaWidth; 
@property (nonatomic,readonly) long long mediaHeight; 
@property (nonatomic,copy,readonly) SCGalleryBoundingBoxDataModel * box; 
@property (nonatomic,copy,readonly) SCGalleryBoundingBoxDataModel * relativeBox; 
@property (nonatomic,readonly) float smileScore; 
@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) float genderScore; 
@property (nonatomic,readonly) float hatScore; 
@property (nonatomic,copy,readonly) NSArray * featureVectors; 
@property (nonatomic,copy,readonly) NSData * frontalizedFace; 
@property (nonatomic,copy,readonly) NSString * faceVersion; 
@property (nonatomic,readonly) long long inferenceVersion; 
@property (nonatomic,copy,readonly) NSArray * landmarks; 
@required
-(long long)mediaWidth;
-(long long)mediaHeight;
-(NSString *)faceVersion;
-(float)genderScore;
-(float)hatScore;
-(NSString *)gallerySnapId;
-(NSString *)gallerySnapMediaId;
-(NSNumber *)mediaTimeMs;
-(SCGalleryBoundingBoxDataModel *)relativeBox;
-(NSData *)frontalizedFace;
-(long long)inferenceVersion;
-(NSString *)faceId;
-(float)smileScore;
-(long long)gender;
-(SCGalleryBoundingBoxDataModel *)box;
-(NSArray *)landmarks;
-(NSArray *)featureVectors;

@end


@class NSString, NSNumber, SCGalleryBoundingBoxDataModel, NSArray, NSData;

@interface SCGalleryFaceDataModel : NSObject <SCGalleryFaceDataModel> {

	float _smileScore;
	float _genderScore;
	float _hatScore;
	NSString* _gallerySnapId;
	NSString* _faceId;
	NSString* _gallerySnapMediaId;
	NSNumber* _mediaTimeMs;
	long long _mediaWidth;
	long long _mediaHeight;
	SCGalleryBoundingBoxDataModel* _box;
	SCGalleryBoundingBoxDataModel* _relativeBox;
	long long _gender;
	NSArray* _featureVectors;
	NSData* _frontalizedFace;
	NSString* _faceVersion;
	long long _inferenceVersion;
	NSArray* _landmarks;

}

@property (nonatomic,copy,readonly) NSString * gallerySnapId;                                 //@synthesize gallerySnapId=_gallerySnapId - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceId;                                        //@synthesize faceId=_faceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * gallerySnapMediaId;                            //@synthesize gallerySnapMediaId=_gallerySnapMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaTimeMs;                                   //@synthesize mediaTimeMs=_mediaTimeMs - In the implementation block
@property (nonatomic,readonly) long long mediaWidth;                                          //@synthesize mediaWidth=_mediaWidth - In the implementation block
@property (nonatomic,readonly) long long mediaHeight;                                         //@synthesize mediaHeight=_mediaHeight - In the implementation block
@property (nonatomic,copy,readonly) SCGalleryBoundingBoxDataModel * box;                      //@synthesize box=_box - In the implementation block
@property (nonatomic,copy,readonly) SCGalleryBoundingBoxDataModel * relativeBox;              //@synthesize relativeBox=_relativeBox - In the implementation block
@property (nonatomic,readonly) float smileScore;                                              //@synthesize smileScore=_smileScore - In the implementation block
@property (nonatomic,readonly) long long gender;                                              //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) float genderScore;                                             //@synthesize genderScore=_genderScore - In the implementation block
@property (nonatomic,readonly) float hatScore;                                                //@synthesize hatScore=_hatScore - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featureVectors;                                 //@synthesize featureVectors=_featureVectors - In the implementation block
@property (nonatomic,copy,readonly) NSData * frontalizedFace;                                 //@synthesize frontalizedFace=_frontalizedFace - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceVersion;                                   //@synthesize faceVersion=_faceVersion - In the implementation block
@property (nonatomic,readonly) long long inferenceVersion;                                    //@synthesize inferenceVersion=_inferenceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * landmarks;                                      //@synthesize landmarks=_landmarks - In the implementation block
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
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(long long)mediaWidth;
-(long long)mediaHeight;
-(NSString *)faceVersion;
-(float)genderScore;
-(float)hatScore;
-(void)setFloat32:(float)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)gallerySnapId;
-(NSString *)gallerySnapMediaId;
-(NSNumber *)mediaTimeMs;
-(SCGalleryBoundingBoxDataModel *)relativeBox;
-(NSData *)frontalizedFace;
-(long long)inferenceVersion;
-(id)initWithGallerySnapId:(id)arg1 faceId:(id)arg2 gallerySnapMediaId:(id)arg3 mediaTimeMs:(id)arg4 mediaWidth:(long long)arg5 mediaHeight:(long long)arg6 box:(id)arg7 relativeBox:(id)arg8 smileScore:(float)arg9 gender:(long long)arg10 genderScore:(float)arg11 hatScore:(float)arg12 featureVectors:(id)arg13 frontalizedFace:(id)arg14 faceVersion:(id)arg15 inferenceVersion:(long long)arg16 landmarks:(id)arg17 ;
-(NSString *)faceId;
-(float)smileScore;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)gender;
-(SCGalleryBoundingBoxDataModel *)box;
-(NSArray *)landmarks;
-(NSArray *)featureVectors;
@end
