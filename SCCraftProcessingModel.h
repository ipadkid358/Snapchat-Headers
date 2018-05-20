/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCCraftProcessingModel : NSObject {

	BOOL _resourceAvailable;
	BOOL _stylizeInClient;
	BOOL _metalFriendly;
	BOOL _nonNeuralNetStyle;
	NSString* _styleId;
	NSString* _version;
	NSString* _resourceLocation;
	NSString* _fingerprint;
	NSString* _modelType;
	NSString* _imagePath;
	NSString* _modelPath;
	NSString* _fingerprintPath;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * styleId;                       //@synthesize styleId=_styleId - In the implementation block
@property (nonatomic,copy) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * resourceLocation;              //@synthesize resourceLocation=_resourceLocation - In the implementation block
@property (nonatomic,copy) NSString * fingerprint;                   //@synthesize fingerprint=_fingerprint - In the implementation block
@property (nonatomic,copy) NSString * modelType;                     //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                     //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * modelPath;                     //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,copy) NSString * fingerprintPath;               //@synthesize fingerprintPath=_fingerprintPath - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL resourceAvailable;                 //@synthesize resourceAvailable=_resourceAvailable - In the implementation block
@property (assign,nonatomic) BOOL stylizeInClient;                   //@synthesize stylizeInClient=_stylizeInClient - In the implementation block
@property (assign,nonatomic) BOOL metalFriendly;                     //@synthesize metalFriendly=_metalFriendly - In the implementation block
@property (assign,nonatomic) BOOL nonNeuralNetStyle;                 //@synthesize nonNeuralNetStyle=_nonNeuralNetStyle - In the implementation block
+(id)noStyleModel;
+(id)cv2StyleModel;
-(id)initWithData:(id)arg1 configuration:(id)arg2 ;
-(NSString *)resourceLocation;
-(void)setResourceAvailable:(BOOL)arg1 ;
-(BOOL)isNoStyleModel;
-(void)setNonNeuralNetStyle:(BOOL)arg1 ;
-(id)getIv;
-(void)setResourceLocation:(NSString *)arg1 ;
-(NSString *)fingerprintPath;
-(void)setFingerprintPath:(NSString *)arg1 ;
-(BOOL)resourceAvailable;
-(BOOL)stylizeInClient;
-(void)setStylizeInClient:(BOOL)arg1 ;
-(BOOL)metalFriendly;
-(void)setMetalFriendly:(BOOL)arg1 ;
-(BOOL)nonNeuralNetStyle;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)fingerprint;
-(void)setFingerprint:(NSString *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(void)setModelType:(NSString *)arg1 ;
-(NSString *)modelType;
-(NSString *)imagePath;
-(void)setStyleId:(NSString *)arg1 ;
-(NSString *)styleId;
-(NSString *)modelPath;
-(void)setModelPath:(NSString *)arg1 ;
@end
